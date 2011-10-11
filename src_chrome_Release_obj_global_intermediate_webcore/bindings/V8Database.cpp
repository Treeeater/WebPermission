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
#include "V8Database.h"

#if ENABLE(SQL_DATABASE)

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8CustomVoidCallback.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include "V8SQLTransactionCallback.h"
#include "V8SQLTransactionErrorCallback.h"

namespace WebCore {

WrapperTypeInfo V8Database::info = { V8Database::GetTemplate, V8Database::derefObject, 0, 0 };

namespace DatabaseInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> versionAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Database.version._get");
    Database* imp = V8Database::toNative(info.Holder());
    return v8String(imp->version());
}

static v8::Handle<v8::Value> changeVersionCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Database.changeVersion");
    if (args.Length() < 2)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    Database* imp = V8Database::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, oldVersion, MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined));
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, newVersion, MAYBE_MISSING_PARAMETER(args, 1, MissingIsUndefined));
    RefPtr<SQLTransactionCallback> callback;
    if (args.Length() > 2 && !args[2]->IsNull() && !args[2]->IsUndefined()) {
        if (!args[2]->IsObject())
            return throwError(TYPE_MISMATCH_ERR);
        callback = V8SQLTransactionCallback::create(args[2], getScriptExecutionContext());
    }
    RefPtr<SQLTransactionErrorCallback> errorCallback;
    if (args.Length() > 3 && !args[3]->IsNull() && !args[3]->IsUndefined()) {
        if (!args[3]->IsObject())
            return throwError(TYPE_MISMATCH_ERR);
        errorCallback = V8SQLTransactionErrorCallback::create(args[3], getScriptExecutionContext());
    }
    RefPtr<VoidCallback> successCallback;
    if (args.Length() > 4 && !args[4]->IsNull() && !args[4]->IsUndefined()) {
        if (!args[4]->IsObject())
            return throwError(TYPE_MISMATCH_ERR);
        successCallback = V8CustomVoidCallback::create(args[4], getScriptExecutionContext());
    }
    imp->changeVersion(oldVersion, newVersion, callback, errorCallback, successCallback);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> transactionCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Database.transaction");
    if (args.Length() < 1)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    Database* imp = V8Database::toNative(args.Holder());
    if (args.Length() <= 0 || !args[0]->IsObject())
        return throwError(TYPE_MISMATCH_ERR);
    RefPtr<SQLTransactionCallback> callback = V8SQLTransactionCallback::create(args[0], getScriptExecutionContext());
    RefPtr<SQLTransactionErrorCallback> errorCallback;
    if (args.Length() > 1 && !args[1]->IsNull() && !args[1]->IsUndefined()) {
        if (!args[1]->IsObject())
            return throwError(TYPE_MISMATCH_ERR);
        errorCallback = V8SQLTransactionErrorCallback::create(args[1], getScriptExecutionContext());
    }
    RefPtr<VoidCallback> successCallback;
    if (args.Length() > 2 && !args[2]->IsNull() && !args[2]->IsUndefined()) {
        if (!args[2]->IsObject())
            return throwError(TYPE_MISMATCH_ERR);
        successCallback = V8CustomVoidCallback::create(args[2], getScriptExecutionContext());
    }
    imp->transaction(callback, errorCallback, successCallback);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> readTransactionCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Database.readTransaction");
    if (args.Length() < 1)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    Database* imp = V8Database::toNative(args.Holder());
    if (args.Length() <= 0 || !args[0]->IsObject())
        return throwError(TYPE_MISMATCH_ERR);
    RefPtr<SQLTransactionCallback> callback = V8SQLTransactionCallback::create(args[0], getScriptExecutionContext());
    RefPtr<SQLTransactionErrorCallback> errorCallback;
    if (args.Length() > 1 && !args[1]->IsNull() && !args[1]->IsUndefined()) {
        if (!args[1]->IsObject())
            return throwError(TYPE_MISMATCH_ERR);
        errorCallback = V8SQLTransactionErrorCallback::create(args[1], getScriptExecutionContext());
    }
    RefPtr<VoidCallback> successCallback;
    if (args.Length() > 2 && !args[2]->IsNull() && !args[2]->IsUndefined()) {
        if (!args[2]->IsObject())
            return throwError(TYPE_MISMATCH_ERR);
        successCallback = V8CustomVoidCallback::create(args[2], getScriptExecutionContext());
    }
    imp->readTransaction(callback, errorCallback, successCallback);
    return v8::Handle<v8::Value>();
}

} // namespace DatabaseInternal

static const BatchedAttribute DatabaseAttrs[] = {
    // Attribute 'version' (Type: 'readonly attribute' ExtAttr: '')
    {"version", DatabaseInternal::versionAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const BatchedCallback DatabaseCallbacks[] = {
    {"changeVersion", DatabaseInternal::changeVersionCallback},
    {"transaction", DatabaseInternal::transactionCallback},
    {"readTransaction", DatabaseInternal::readTransactionCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8DatabaseTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "Database", v8::Persistent<v8::FunctionTemplate>(), V8Database::internalFieldCount,
        DatabaseAttrs, WTF_ARRAY_LENGTH(DatabaseAttrs),
        DatabaseCallbacks, WTF_ARRAY_LENGTH(DatabaseCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8Database::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8Database::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8DatabaseTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8Database::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8Database::wrapSlow(Database* impl)
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

void V8Database::derefObject(void* object)
{
    static_cast<Database*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SQL_DATABASE)