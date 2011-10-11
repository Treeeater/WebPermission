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
#include "V8SVGStringList.h"

#if ENABLE(SVG)

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8SVGStringList::info = { V8SVGStringList::GetTemplate, V8SVGStringList::derefObject, 0, 0 };

namespace SVGStringListInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> numberOfItemsAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGStringList.numberOfItems._get");
    SVGStaticListPropertyTearOff<SVGStringList>* imp = V8SVGStringList::toNative(info.Holder());
    return v8::Integer::NewFromUnsigned(imp->numberOfItems());
}

static v8::Handle<v8::Value> clearCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGStringList.clear");
    RefPtr<SVGStaticListPropertyTearOff<SVGStringList> > imp = V8SVGStringList::toNative(args.Holder());
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
    INC_STATS("DOM.SVGStringList.initialize");
    if (args.Length() < 1)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    RefPtr<SVGStaticListPropertyTearOff<SVGStringList> > imp = V8SVGStringList::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, item, MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined));
    String result = imp->initialize(item, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8String(result);
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> getItemCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGStringList.getItem");
    if (args.Length() < 1)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    RefPtr<SVGStaticListPropertyTearOff<SVGStringList> > imp = V8SVGStringList::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(unsigned, index, toUInt32(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)));
    String result = imp->getItem(index, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8String(result);
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> insertItemBeforeCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGStringList.insertItemBefore");
    if (args.Length() < 2)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    RefPtr<SVGStaticListPropertyTearOff<SVGStringList> > imp = V8SVGStringList::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, item, MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined));
    EXCEPTION_BLOCK(unsigned, index, toUInt32(MAYBE_MISSING_PARAMETER(args, 1, MissingIsUndefined)));
    String result = imp->insertItemBefore(item, index, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8String(result);
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> replaceItemCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGStringList.replaceItem");
    if (args.Length() < 2)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    RefPtr<SVGStaticListPropertyTearOff<SVGStringList> > imp = V8SVGStringList::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, item, MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined));
    EXCEPTION_BLOCK(unsigned, index, toUInt32(MAYBE_MISSING_PARAMETER(args, 1, MissingIsUndefined)));
    String result = imp->replaceItem(item, index, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8String(result);
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> removeItemCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGStringList.removeItem");
    if (args.Length() < 1)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    RefPtr<SVGStaticListPropertyTearOff<SVGStringList> > imp = V8SVGStringList::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(unsigned, index, toUInt32(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)));
    String result = imp->removeItem(index, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8String(result);
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> appendItemCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGStringList.appendItem");
    if (args.Length() < 1)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    RefPtr<SVGStaticListPropertyTearOff<SVGStringList> > imp = V8SVGStringList::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, item, MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined));
    String result = imp->appendItem(item, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8String(result);
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

} // namespace SVGStringListInternal

static const BatchedAttribute SVGStringListAttrs[] = {
    // Attribute 'numberOfItems' (Type: 'readonly attribute' ExtAttr: '')
    {"numberOfItems", SVGStringListInternal::numberOfItemsAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const BatchedCallback SVGStringListCallbacks[] = {
    {"clear", SVGStringListInternal::clearCallback},
    {"initialize", SVGStringListInternal::initializeCallback},
    {"getItem", SVGStringListInternal::getItemCallback},
    {"insertItemBefore", SVGStringListInternal::insertItemBeforeCallback},
    {"replaceItem", SVGStringListInternal::replaceItemCallback},
    {"removeItem", SVGStringListInternal::removeItemCallback},
    {"appendItem", SVGStringListInternal::appendItemCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGStringListTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "SVGStringList", v8::Persistent<v8::FunctionTemplate>(), V8SVGStringList::internalFieldCount,
        SVGStringListAttrs, WTF_ARRAY_LENGTH(SVGStringListAttrs),
        SVGStringListCallbacks, WTF_ARRAY_LENGTH(SVGStringListCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGStringList::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8SVGStringList::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8SVGStringListTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8SVGStringList::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGStringList::wrapSlow(SVGStaticListPropertyTearOff<SVGStringList>* impl)
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

void V8SVGStringList::derefObject(void* object)
{
    static_cast<SVGStaticListPropertyTearOff<SVGStringList>*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG)
