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
#include "V8InjectedScriptHost.h"

#if ENABLE(INSPECTOR)

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8InjectedScriptHost::info = { V8InjectedScriptHost::GetTemplate, V8InjectedScriptHost::derefObject, 0, 0 };

namespace InjectedScriptHostInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> clearConsoleMessagesCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.InjectedScriptHost.clearConsoleMessages");
    InjectedScriptHost* imp = V8InjectedScriptHost::toNative(args.Holder());
    imp->clearConsoleMessages();
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> copyTextCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.InjectedScriptHost.copyText");
    InjectedScriptHost* imp = V8InjectedScriptHost::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, text, MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined));
    imp->copyText(text);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> didCreateWorkerCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.InjectedScriptHost.didCreateWorker");
    InjectedScriptHost* imp = V8InjectedScriptHost::toNative(args.Holder());
    EXCEPTION_BLOCK(int, id, toInt32(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)));
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, url, MAYBE_MISSING_PARAMETER(args, 1, MissingIsUndefined));
    EXCEPTION_BLOCK(bool, isFakeWorker, MAYBE_MISSING_PARAMETER(args, 2, MissingIsUndefined)->BooleanValue());
    imp->didCreateWorker(id, url, isFakeWorker);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> didDestroyWorkerCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.InjectedScriptHost.didDestroyWorker");
    InjectedScriptHost* imp = V8InjectedScriptHost::toNative(args.Holder());
    EXCEPTION_BLOCK(int, id, toInt32(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)));
    imp->didDestroyWorker(id);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> nextWorkerIdCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.InjectedScriptHost.nextWorkerId");
    InjectedScriptHost* imp = V8InjectedScriptHost::toNative(args.Holder());
    return v8::Integer::New(imp->nextWorkerId());
}

} // namespace InjectedScriptHostInternal

static const BatchedCallback InjectedScriptHostCallbacks[] = {
    {"clearConsoleMessages", InjectedScriptHostInternal::clearConsoleMessagesCallback},
    {"evaluate", V8InjectedScriptHost::evaluateCallback},
    {"copyText", InjectedScriptHostInternal::copyTextCallback},
    {"inspect", V8InjectedScriptHost::inspectCallback},
    {"inspectedNode", V8InjectedScriptHost::inspectedNodeCallback},
    {"internalConstructorName", V8InjectedScriptHost::internalConstructorNameCallback},
    {"isHTMLAllCollection", V8InjectedScriptHost::isHTMLAllCollectionCallback},
    {"type", V8InjectedScriptHost::typeCallback},
    {"databaseId", V8InjectedScriptHost::databaseIdCallback},
    {"storageId", V8InjectedScriptHost::storageIdCallback},
    {"didCreateWorker", InjectedScriptHostInternal::didCreateWorkerCallback},
    {"didDestroyWorker", InjectedScriptHostInternal::didDestroyWorkerCallback},
    {"nextWorkerId", InjectedScriptHostInternal::nextWorkerIdCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8InjectedScriptHostTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "InjectedScriptHost", v8::Persistent<v8::FunctionTemplate>(), V8InjectedScriptHost::internalFieldCount,
        0, 0,
        InjectedScriptHostCallbacks, WTF_ARRAY_LENGTH(InjectedScriptHostCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8InjectedScriptHost::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8InjectedScriptHost::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8InjectedScriptHostTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8InjectedScriptHost::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8InjectedScriptHost::wrapSlow(InjectedScriptHost* impl)
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

void V8InjectedScriptHost::derefObject(void* object)
{
    static_cast<InjectedScriptHost*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(INSPECTOR)