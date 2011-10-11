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
#include "V8HTMLOptionsCollection.h"

#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8Collection.h"
#include "V8DOMWrapper.h"
#include "V8HTMLCollection.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8HTMLOptionsCollection::info = { V8HTMLOptionsCollection::GetTemplate, V8HTMLOptionsCollection::derefObject, 0, &V8HTMLCollection::info };

namespace HTMLOptionsCollectionInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> selectedIndexAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLOptionsCollection.selectedIndex._get");
    HTMLOptionsCollection* imp = V8HTMLOptionsCollection::toNative(info.Holder());
    return v8::Integer::New(imp->selectedIndex());
}

static void selectedIndexAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLOptionsCollection.selectedIndex._set");
    HTMLOptionsCollection* imp = V8HTMLOptionsCollection::toNative(info.Holder());
    int v = toInt32(value);
    imp->setSelectedIndex(v);
    return;
}

} // namespace HTMLOptionsCollectionInternal

static const BatchedAttribute HTMLOptionsCollectionAttrs[] = {
    // Attribute 'selectedIndex' (Type: 'attribute' ExtAttr: '')
    {"selectedIndex", HTMLOptionsCollectionInternal::selectedIndexAttrGetter, HTMLOptionsCollectionInternal::selectedIndexAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'length' (Type: 'attribute' ExtAttr: 'Custom')
    {"length", V8HTMLOptionsCollection::lengthAccessorGetter, V8HTMLOptionsCollection::lengthAccessorSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const BatchedCallback HTMLOptionsCollectionCallbacks[] = {
    {"add", V8HTMLOptionsCollection::addCallback},
    {"remove", V8HTMLOptionsCollection::removeCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLOptionsCollectionTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "HTMLOptionsCollection", V8HTMLCollection::GetTemplate(), V8HTMLOptionsCollection::internalFieldCount,
        HTMLOptionsCollectionAttrs, WTF_ARRAY_LENGTH(HTMLOptionsCollectionAttrs),
        HTMLOptionsCollectionCallbacks, WTF_ARRAY_LENGTH(HTMLOptionsCollectionCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    
    desc->InstanceTemplate()->SetIndexedPropertyHandler(V8HTMLOptionsCollection::indexedPropertyGetter, V8HTMLOptionsCollection::indexedPropertySetter, 0, 0);
    desc->InstanceTemplate()->SetNamedPropertyHandler(V8HTMLCollection::namedPropertyGetter, 0, 0, 0, 0);
    desc->InstanceTemplate()->SetCallAsFunctionHandler(V8HTMLCollection::callAsFunctionCallback);

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLOptionsCollection::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8HTMLOptionsCollection::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8HTMLOptionsCollectionTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8HTMLOptionsCollection::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLOptionsCollection::wrapSlow(HTMLOptionsCollection* impl)
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

void V8HTMLOptionsCollection::derefObject(void* object)
{
    static_cast<HTMLOptionsCollection*>(object)->deref();
}

} // namespace WebCore