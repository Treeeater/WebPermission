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
#include "V8SVGPathSegList.h"

#if ENABLE(SVG)

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "SVGPathSeg.h"
#include "SVGPathSegList.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include "V8SVGPathSeg.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8SVGPathSegList::info = { V8SVGPathSegList::GetTemplate, V8SVGPathSegList::derefObject, 0, 0 };

namespace SVGPathSegListInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> numberOfItemsAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPathSegList.numberOfItems._get");
    SVGPathSegListPropertyTearOff* imp = V8SVGPathSegList::toNative(info.Holder());
    return v8::Integer::NewFromUnsigned(imp->numberOfItems());
}

static v8::Handle<v8::Value> clearCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPathSegList.clear");
    RefPtr<SVGPathSegListPropertyTearOff > imp = V8SVGPathSegList::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    imp->clear(ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Handle<v8::Value>();
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> initializeCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPathSegList.initialize");
    if (args.Length() < 1)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    RefPtr<SVGPathSegListPropertyTearOff > imp = V8SVGPathSegList::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    if (args.Length() > 0 && !isUndefinedOrNull(args[0]) && !V8SVGPathSeg::HasInstance(args[0])) {
        V8Proxy::throwTypeError();
        return notHandledByInterceptor();
    }
    EXCEPTION_BLOCK(SVGPathSeg*, newItem, V8SVGPathSeg::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)) ? V8SVGPathSeg::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined))) : 0);
    RefPtr<SVGPathSeg> result = imp->initialize(newItem, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> getItemCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPathSegList.getItem");
    if (args.Length() < 1)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    RefPtr<SVGPathSegListPropertyTearOff > imp = V8SVGPathSegList::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(unsigned, index, toUInt32(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)));
    RefPtr<SVGPathSeg> result = imp->getItem(index, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> insertItemBeforeCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPathSegList.insertItemBefore");
    if (args.Length() < 2)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    RefPtr<SVGPathSegListPropertyTearOff > imp = V8SVGPathSegList::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    if (args.Length() > 0 && !isUndefinedOrNull(args[0]) && !V8SVGPathSeg::HasInstance(args[0])) {
        V8Proxy::throwTypeError();
        return notHandledByInterceptor();
    }
    EXCEPTION_BLOCK(SVGPathSeg*, newItem, V8SVGPathSeg::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)) ? V8SVGPathSeg::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined))) : 0);
    EXCEPTION_BLOCK(unsigned, index, toUInt32(MAYBE_MISSING_PARAMETER(args, 1, MissingIsUndefined)));
    RefPtr<SVGPathSeg> result = imp->insertItemBefore(newItem, index, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> replaceItemCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPathSegList.replaceItem");
    if (args.Length() < 2)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    RefPtr<SVGPathSegListPropertyTearOff > imp = V8SVGPathSegList::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    if (args.Length() > 0 && !isUndefinedOrNull(args[0]) && !V8SVGPathSeg::HasInstance(args[0])) {
        V8Proxy::throwTypeError();
        return notHandledByInterceptor();
    }
    EXCEPTION_BLOCK(SVGPathSeg*, newItem, V8SVGPathSeg::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)) ? V8SVGPathSeg::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined))) : 0);
    EXCEPTION_BLOCK(unsigned, index, toUInt32(MAYBE_MISSING_PARAMETER(args, 1, MissingIsUndefined)));
    RefPtr<SVGPathSeg> result = imp->replaceItem(newItem, index, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> removeItemCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPathSegList.removeItem");
    if (args.Length() < 1)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    RefPtr<SVGPathSegListPropertyTearOff > imp = V8SVGPathSegList::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(unsigned, index, toUInt32(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)));
    RefPtr<SVGPathSeg> result = imp->removeItem(index, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> appendItemCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPathSegList.appendItem");
    if (args.Length() < 1)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    RefPtr<SVGPathSegListPropertyTearOff > imp = V8SVGPathSegList::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    if (args.Length() > 0 && !isUndefinedOrNull(args[0]) && !V8SVGPathSeg::HasInstance(args[0])) {
        V8Proxy::throwTypeError();
        return notHandledByInterceptor();
    }
    EXCEPTION_BLOCK(SVGPathSeg*, newItem, V8SVGPathSeg::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)) ? V8SVGPathSeg::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined))) : 0);
    RefPtr<SVGPathSeg> result = imp->appendItem(newItem, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

} // namespace SVGPathSegListInternal

static const BatchedAttribute SVGPathSegListAttrs[] = {
    // Attribute 'numberOfItems' (Type: 'readonly attribute' ExtAttr: '')
    {"numberOfItems", SVGPathSegListInternal::numberOfItemsAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const BatchedCallback SVGPathSegListCallbacks[] = {
    {"clear", SVGPathSegListInternal::clearCallback},
    {"initialize", SVGPathSegListInternal::initializeCallback},
    {"getItem", SVGPathSegListInternal::getItemCallback},
    {"insertItemBefore", SVGPathSegListInternal::insertItemBeforeCallback},
    {"replaceItem", SVGPathSegListInternal::replaceItemCallback},
    {"removeItem", SVGPathSegListInternal::removeItemCallback},
    {"appendItem", SVGPathSegListInternal::appendItemCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGPathSegListTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "SVGPathSegList", v8::Persistent<v8::FunctionTemplate>(), V8SVGPathSegList::internalFieldCount,
        SVGPathSegListAttrs, WTF_ARRAY_LENGTH(SVGPathSegListAttrs),
        SVGPathSegListCallbacks, WTF_ARRAY_LENGTH(SVGPathSegListCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGPathSegList::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8SVGPathSegList::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8SVGPathSegListTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8SVGPathSegList::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGPathSegList::wrapSlow(SVGPathSegListPropertyTearOff* impl)
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

void V8SVGPathSegList::derefObject(void* object)
{
    static_cast<SVGPathSegListPropertyTearOff*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG)
