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
#include "V8MediaList.h"

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8Collection.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8MediaList::info = { V8MediaList::GetTemplate, V8MediaList::derefObject, 0, 0 };

namespace MediaListInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> mediaTextAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.MediaList.mediaText._get");
    MediaList* imp = V8MediaList::toNative(info.Holder());
    return v8StringOrNull(imp->mediaText());
}

static void mediaTextAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.MediaList.mediaText._set");
    MediaList* imp = V8MediaList::toNative(info.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK_VOID(V8Parameter<WithNullCheck>, v, value);
    ExceptionCode ec = 0;
    imp->setMediaText(v, ec);
    if (UNLIKELY(ec))
        V8Proxy::setDOMException(ec);
    return;
}

static v8::Handle<v8::Value> lengthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.MediaList.length._get");
    MediaList* imp = V8MediaList::toNative(info.Holder());
    return v8::Integer::NewFromUnsigned(imp->length());
}

static v8::Handle<v8::Value> itemCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.MediaList.item");
    MediaList* imp = V8MediaList::toNative(args.Holder());
    EXCEPTION_BLOCK(unsigned, index, toUInt32(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)));
    return v8StringOrNull(imp->item(index));
}

static v8::Handle<v8::Value> deleteMediumCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.MediaList.deleteMedium");
    MediaList* imp = V8MediaList::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, oldMedium, MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined));
    imp->deleteMedium(oldMedium, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Handle<v8::Value>();
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> appendMediumCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.MediaList.appendMedium");
    MediaList* imp = V8MediaList::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, newMedium, MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined));
    imp->appendMedium(newMedium, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Handle<v8::Value>();
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

} // namespace MediaListInternal

static const BatchedAttribute MediaListAttrs[] = {
    // Attribute 'mediaText' (Type: 'attribute' ExtAttr: 'ConvertNullToNullString ConvertNullStringTo')
    {"mediaText", MediaListInternal::mediaTextAttrGetter, MediaListInternal::mediaTextAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'length' (Type: 'readonly attribute' ExtAttr: '')
    {"length", MediaListInternal::lengthAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const BatchedCallback MediaListCallbacks[] = {
    {"item", MediaListInternal::itemCallback},
    {"deleteMedium", MediaListInternal::deleteMediumCallback},
    {"appendMedium", MediaListInternal::appendMediumCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8MediaListTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "MediaList", v8::Persistent<v8::FunctionTemplate>(), V8MediaList::internalFieldCount,
        MediaListAttrs, WTF_ARRAY_LENGTH(MediaListAttrs),
        MediaListCallbacks, WTF_ARRAY_LENGTH(MediaListCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    
    setCollectionStringOrNullIndexedGetter<MediaList>(desc);

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8MediaList::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8MediaList::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8MediaListTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8MediaList::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8MediaList::wrapSlow(MediaList* impl)
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

void V8MediaList::derefObject(void* object)
{
    static_cast<MediaList*>(object)->deref();
}

} // namespace WebCore