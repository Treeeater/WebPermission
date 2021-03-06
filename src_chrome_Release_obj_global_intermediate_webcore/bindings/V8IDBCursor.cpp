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
#include "V8IDBCursor.h"

#if ENABLE(INDEXED_DATABASE)

#include "ExceptionCode.h"
#include "IDBBindingUtilities.h"
#include "IDBKey.h"
#include "RuntimeEnabledFeatures.h"
#include "SerializedScriptValue.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IDBAny.h"
#include "V8IDBKey.h"
#include "V8IDBRequest.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8IDBCursor::info = { V8IDBCursor::GetTemplate, V8IDBCursor::derefObject, 0, 0 };

namespace IDBCursorInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> directionAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.IDBCursor.direction._get");
    IDBCursor* imp = V8IDBCursor::toNative(info.Holder());
    return v8::Integer::New(imp->direction());
}

static v8::Handle<v8::Value> keyAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.IDBCursor.key._get");
    IDBCursor* imp = V8IDBCursor::toNative(info.Holder());
    return toV8(imp->key());
}

static v8::Handle<v8::Value> primaryKeyAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.IDBCursor.primaryKey._get");
    IDBCursor* imp = V8IDBCursor::toNative(info.Holder());
    return toV8(imp->primaryKey());
}

static v8::Handle<v8::Value> sourceAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.IDBCursor.source._get");
    IDBCursor* imp = V8IDBCursor::toNative(info.Holder());
    RefPtr<IDBAny> result = imp->source();
    v8::Handle<v8::Value> wrapper = result.get() ? getDOMObjectMap().get(result.get()) : v8::Handle<v8::Value>();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "source", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> updateCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.IDBCursor.update");
    if (args.Length() < 1)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    IDBCursor* imp = V8IDBCursor::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    bool valueDidThrow = false;
    RefPtr<SerializedScriptValue> value = SerializedScriptValue::create(args[0], valueDidThrow);
    if (valueDidThrow)
        return v8::Undefined();
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    if (!scriptContext)
        return v8::Undefined();
    RefPtr<IDBRequest> result = imp->update(scriptContext, value, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> continueCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.IDBCursor.continue");
    IDBCursor* imp = V8IDBCursor::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    if (args.Length() <= 0) {
        imp->continueFunction(ec);
        if (UNLIKELY(ec))
            goto fail;
        return v8::Handle<v8::Value>();
    }
    RefPtr<IDBKey> key = createIDBKeyFromValue(args[0]);
    if (UNLIKELY(!key)) {
        ec = TYPE_MISMATCH_ERR;
        goto fail;
    }
    imp->continueFunction(key, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Handle<v8::Value>();
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> deleteCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.IDBCursor.delete");
    IDBCursor* imp = V8IDBCursor::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    if (!scriptContext)
        return v8::Undefined();
    RefPtr<IDBRequest> result = imp->deleteFunction(scriptContext, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

} // namespace IDBCursorInternal

static const BatchedAttribute IDBCursorAttrs[] = {
    // Attribute 'direction' (Type: 'readonly attribute' ExtAttr: '')
    {"direction", IDBCursorInternal::directionAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'key' (Type: 'readonly attribute' ExtAttr: '')
    {"key", IDBCursorInternal::keyAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'primaryKey' (Type: 'readonly attribute' ExtAttr: '')
    {"primaryKey", IDBCursorInternal::primaryKeyAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'source' (Type: 'readonly attribute' ExtAttr: '')
    {"source", IDBCursorInternal::sourceAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const BatchedCallback IDBCursorCallbacks[] = {
    {"update", IDBCursorInternal::updateCallback},
    {"continue", IDBCursorInternal::continueCallback},
    {"delete", IDBCursorInternal::deleteCallback},
};

static const BatchedConstant IDBCursorConsts[] = {
    {"NEXT", static_cast<signed int>(0)},
    {"NEXT_NO_DUPLICATE", static_cast<signed int>(1)},
    {"PREV", static_cast<signed int>(2)},
    {"PREV_NO_DUPLICATE", static_cast<signed int>(3)},
};


COMPILE_ASSERT(0 == IDBCursor::NEXT, IDBCursorEnumNEXTIsWrongUseDontCheckEnums);
COMPILE_ASSERT(1 == IDBCursor::NEXT_NO_DUPLICATE, IDBCursorEnumNEXT_NO_DUPLICATEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(2 == IDBCursor::PREV, IDBCursorEnumPREVIsWrongUseDontCheckEnums);
COMPILE_ASSERT(3 == IDBCursor::PREV_NO_DUPLICATE, IDBCursorEnumPREV_NO_DUPLICATEIsWrongUseDontCheckEnums);

static v8::Persistent<v8::FunctionTemplate> ConfigureV8IDBCursorTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "IDBCursor", v8::Persistent<v8::FunctionTemplate>(), V8IDBCursor::internalFieldCount,
        IDBCursorAttrs, WTF_ARRAY_LENGTH(IDBCursorAttrs),
        IDBCursorCallbacks, WTF_ARRAY_LENGTH(IDBCursorCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    
    batchConfigureConstants(desc, proto, IDBCursorConsts, WTF_ARRAY_LENGTH(IDBCursorConsts));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8IDBCursor::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8IDBCursor::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8IDBCursorTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8IDBCursor::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8IDBCursor::wrapSlow(IDBCursor* impl)
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

void V8IDBCursor::derefObject(void* object)
{
    static_cast<IDBCursor*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(INDEXED_DATABASE)
