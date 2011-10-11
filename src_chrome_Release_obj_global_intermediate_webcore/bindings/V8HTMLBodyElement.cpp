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
#include "V8HTMLBodyElement.h"

#include "EventListener.h"
#include "HTMLNames.h"
#include "RuntimeEnabledFeatures.h"
#include "V8AbstractEventListener.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8HTMLElement.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8HTMLBodyElement::info = { V8HTMLBodyElement::GetTemplate, V8HTMLBodyElement::derefObject, 0, &V8HTMLElement::info };

namespace HTMLBodyElementInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> aLinkAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.aLink._get");
    return getElementStringAttr(info, HTMLNames::alinkAttr);
}

static void aLinkAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.aLink._set");
    setElementStringAttr(info, HTMLNames::alinkAttr, value);
}

static v8::Handle<v8::Value> backgroundAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.background._get");
    return getElementStringAttr(info, HTMLNames::backgroundAttr);
}

static void backgroundAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.background._set");
    setElementStringAttr(info, HTMLNames::backgroundAttr, value);
}

static v8::Handle<v8::Value> bgColorAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.bgColor._get");
    return getElementStringAttr(info, HTMLNames::bgcolorAttr);
}

static void bgColorAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.bgColor._set");
    setElementStringAttr(info, HTMLNames::bgcolorAttr, value);
}

static v8::Handle<v8::Value> linkAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.link._get");
    return getElementStringAttr(info, HTMLNames::linkAttr);
}

static void linkAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.link._set");
    setElementStringAttr(info, HTMLNames::linkAttr, value);
}

static v8::Handle<v8::Value> textAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.text._get");
    return getElementStringAttr(info, HTMLNames::textAttr);
}

static void textAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.text._set");
    setElementStringAttr(info, HTMLNames::textAttr, value);
}

static v8::Handle<v8::Value> vLinkAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.vLink._get");
    return getElementStringAttr(info, HTMLNames::vlinkAttr);
}

static void vLinkAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.vLink._set");
    setElementStringAttr(info, HTMLNames::vlinkAttr, value);
}

static v8::Handle<v8::Value> onbeforeunloadAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.onbeforeunload._get");
    HTMLBodyElement* imp = V8HTMLBodyElement::toNative(info.Holder());
    return imp->onbeforeunload() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onbeforeunload())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8::Null());
}

static void onbeforeunloadAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.onbeforeunload._set");
    HTMLBodyElement* imp = V8HTMLBodyElement::toNative(info.Holder());
    imp->setOnbeforeunload(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onhashchangeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.onhashchange._get");
    HTMLBodyElement* imp = V8HTMLBodyElement::toNative(info.Holder());
    return imp->onhashchange() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onhashchange())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8::Null());
}

static void onhashchangeAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.onhashchange._set");
    HTMLBodyElement* imp = V8HTMLBodyElement::toNative(info.Holder());
    imp->setOnhashchange(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onmessageAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.onmessage._get");
    HTMLBodyElement* imp = V8HTMLBodyElement::toNative(info.Holder());
    return imp->onmessage() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onmessage())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8::Null());
}

static void onmessageAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.onmessage._set");
    HTMLBodyElement* imp = V8HTMLBodyElement::toNative(info.Holder());
    imp->setOnmessage(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onofflineAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.onoffline._get");
    HTMLBodyElement* imp = V8HTMLBodyElement::toNative(info.Holder());
    return imp->onoffline() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onoffline())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8::Null());
}

static void onofflineAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.onoffline._set");
    HTMLBodyElement* imp = V8HTMLBodyElement::toNative(info.Holder());
    imp->setOnoffline(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> ononlineAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.ononline._get");
    HTMLBodyElement* imp = V8HTMLBodyElement::toNative(info.Holder());
    return imp->ononline() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->ononline())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8::Null());
}

static void ononlineAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.ononline._set");
    HTMLBodyElement* imp = V8HTMLBodyElement::toNative(info.Holder());
    imp->setOnonline(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onpopstateAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.onpopstate._get");
    HTMLBodyElement* imp = V8HTMLBodyElement::toNative(info.Holder());
    return imp->onpopstate() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onpopstate())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8::Null());
}

static void onpopstateAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.onpopstate._set");
    HTMLBodyElement* imp = V8HTMLBodyElement::toNative(info.Holder());
    imp->setOnpopstate(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onresizeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.onresize._get");
    HTMLBodyElement* imp = V8HTMLBodyElement::toNative(info.Holder());
    return imp->onresize() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onresize())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8::Null());
}

static void onresizeAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.onresize._set");
    HTMLBodyElement* imp = V8HTMLBodyElement::toNative(info.Holder());
    imp->setOnresize(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onstorageAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.onstorage._get");
    HTMLBodyElement* imp = V8HTMLBodyElement::toNative(info.Holder());
    return imp->onstorage() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onstorage())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8::Null());
}

static void onstorageAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.onstorage._set");
    HTMLBodyElement* imp = V8HTMLBodyElement::toNative(info.Holder());
    imp->setOnstorage(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onunloadAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.onunload._get");
    HTMLBodyElement* imp = V8HTMLBodyElement::toNative(info.Holder());
    return imp->onunload() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onunload())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8::Null());
}

static void onunloadAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.onunload._set");
    HTMLBodyElement* imp = V8HTMLBodyElement::toNative(info.Holder());
    imp->setOnunload(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

#if ENABLE(ORIENTATION_EVENTS)

static v8::Handle<v8::Value> onorientationchangeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.onorientationchange._get");
    HTMLBodyElement* imp = V8HTMLBodyElement::toNative(info.Holder());
    return imp->onorientationchange() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onorientationchange())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8::Null());
}

#endif // ENABLE(ORIENTATION_EVENTS)

#if ENABLE(ORIENTATION_EVENTS)

static void onorientationchangeAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.onorientationchange._set");
    HTMLBodyElement* imp = V8HTMLBodyElement::toNative(info.Holder());
    imp->setOnorientationchange(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

#endif // ENABLE(ORIENTATION_EVENTS)

static v8::Handle<v8::Value> onblurAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.onblur._get");
    HTMLBodyElement* imp = V8HTMLBodyElement::toNative(info.Holder());
    return imp->onblur() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onblur())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8::Null());
}

static void onblurAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.onblur._set");
    HTMLBodyElement* imp = V8HTMLBodyElement::toNative(info.Holder());
    imp->setOnblur(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onerrorAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.onerror._get");
    HTMLBodyElement* imp = V8HTMLBodyElement::toNative(info.Holder());
    return imp->onerror() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onerror())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8::Null());
}

static void onerrorAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.onerror._set");
    HTMLBodyElement* imp = V8HTMLBodyElement::toNative(info.Holder());
    imp->setOnerror(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onfocusAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.onfocus._get");
    HTMLBodyElement* imp = V8HTMLBodyElement::toNative(info.Holder());
    return imp->onfocus() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onfocus())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8::Null());
}

static void onfocusAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.onfocus._set");
    HTMLBodyElement* imp = V8HTMLBodyElement::toNative(info.Holder());
    imp->setOnfocus(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onloadAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.onload._get");
    HTMLBodyElement* imp = V8HTMLBodyElement::toNative(info.Holder());
    return imp->onload() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onload())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8::Null());
}

static void onloadAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBodyElement.onload._set");
    HTMLBodyElement* imp = V8HTMLBodyElement::toNative(info.Holder());
    imp->setOnload(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

} // namespace HTMLBodyElementInternal

static const BatchedAttribute HTMLBodyElementAttrs[] = {
    // Attribute 'aLink' (Type: 'attribute' ExtAttr: 'Reflect')
    {"aLink", HTMLBodyElementInternal::aLinkAttrGetter, HTMLBodyElementInternal::aLinkAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'background' (Type: 'attribute' ExtAttr: 'Reflect')
    {"background", HTMLBodyElementInternal::backgroundAttrGetter, HTMLBodyElementInternal::backgroundAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'bgColor' (Type: 'attribute' ExtAttr: 'Reflect')
    {"bgColor", HTMLBodyElementInternal::bgColorAttrGetter, HTMLBodyElementInternal::bgColorAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'link' (Type: 'attribute' ExtAttr: 'Reflect')
    {"link", HTMLBodyElementInternal::linkAttrGetter, HTMLBodyElementInternal::linkAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'text' (Type: 'attribute' ExtAttr: 'Reflect')
    {"text", HTMLBodyElementInternal::textAttrGetter, HTMLBodyElementInternal::textAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'vLink' (Type: 'attribute' ExtAttr: 'Reflect')
    {"vLink", HTMLBodyElementInternal::vLinkAttrGetter, HTMLBodyElementInternal::vLinkAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onbeforeunload' (Type: 'attribute' ExtAttr: 'WindowEventListener DontEnum')
    {"onbeforeunload", HTMLBodyElementInternal::onbeforeunloadAttrGetter, HTMLBodyElementInternal::onbeforeunloadAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None | v8::DontEnum), 0 /* on instance */},
    // Attribute 'onhashchange' (Type: 'attribute' ExtAttr: 'WindowEventListener DontEnum')
    {"onhashchange", HTMLBodyElementInternal::onhashchangeAttrGetter, HTMLBodyElementInternal::onhashchangeAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None | v8::DontEnum), 0 /* on instance */},
    // Attribute 'onmessage' (Type: 'attribute' ExtAttr: 'WindowEventListener DontEnum')
    {"onmessage", HTMLBodyElementInternal::onmessageAttrGetter, HTMLBodyElementInternal::onmessageAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None | v8::DontEnum), 0 /* on instance */},
    // Attribute 'onoffline' (Type: 'attribute' ExtAttr: 'WindowEventListener DontEnum')
    {"onoffline", HTMLBodyElementInternal::onofflineAttrGetter, HTMLBodyElementInternal::onofflineAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None | v8::DontEnum), 0 /* on instance */},
    // Attribute 'ononline' (Type: 'attribute' ExtAttr: 'WindowEventListener DontEnum')
    {"ononline", HTMLBodyElementInternal::ononlineAttrGetter, HTMLBodyElementInternal::ononlineAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None | v8::DontEnum), 0 /* on instance */},
    // Attribute 'onpopstate' (Type: 'attribute' ExtAttr: 'WindowEventListener DontEnum')
    {"onpopstate", HTMLBodyElementInternal::onpopstateAttrGetter, HTMLBodyElementInternal::onpopstateAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None | v8::DontEnum), 0 /* on instance */},
    // Attribute 'onresize' (Type: 'attribute' ExtAttr: 'WindowEventListener DontEnum')
    {"onresize", HTMLBodyElementInternal::onresizeAttrGetter, HTMLBodyElementInternal::onresizeAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None | v8::DontEnum), 0 /* on instance */},
    // Attribute 'onstorage' (Type: 'attribute' ExtAttr: 'WindowEventListener DontEnum')
    {"onstorage", HTMLBodyElementInternal::onstorageAttrGetter, HTMLBodyElementInternal::onstorageAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None | v8::DontEnum), 0 /* on instance */},
    // Attribute 'onunload' (Type: 'attribute' ExtAttr: 'WindowEventListener DontEnum')
    {"onunload", HTMLBodyElementInternal::onunloadAttrGetter, HTMLBodyElementInternal::onunloadAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None | v8::DontEnum), 0 /* on instance */},
#if ENABLE(ORIENTATION_EVENTS)
    // Attribute 'onorientationchange' (Type: 'attribute' ExtAttr: 'WindowEventListener DontEnum Conditional')
    {"onorientationchange", HTMLBodyElementInternal::onorientationchangeAttrGetter, HTMLBodyElementInternal::onorientationchangeAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None | v8::DontEnum), 0 /* on instance */},
#endif // ENABLE(ORIENTATION_EVENTS)
    // Attribute 'onblur' (Type: 'attribute' ExtAttr: 'WindowEventListener DontEnum')
    {"onblur", HTMLBodyElementInternal::onblurAttrGetter, HTMLBodyElementInternal::onblurAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None | v8::DontEnum), 0 /* on instance */},
    // Attribute 'onerror' (Type: 'attribute' ExtAttr: 'WindowEventListener DontEnum')
    {"onerror", HTMLBodyElementInternal::onerrorAttrGetter, HTMLBodyElementInternal::onerrorAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None | v8::DontEnum), 0 /* on instance */},
    // Attribute 'onfocus' (Type: 'attribute' ExtAttr: 'WindowEventListener DontEnum')
    {"onfocus", HTMLBodyElementInternal::onfocusAttrGetter, HTMLBodyElementInternal::onfocusAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None | v8::DontEnum), 0 /* on instance */},
    // Attribute 'onload' (Type: 'attribute' ExtAttr: 'WindowEventListener DontEnum')
    {"onload", HTMLBodyElementInternal::onloadAttrGetter, HTMLBodyElementInternal::onloadAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None | v8::DontEnum), 0 /* on instance */},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLBodyElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "HTMLBodyElement", V8HTMLElement::GetTemplate(), V8HTMLBodyElement::internalFieldCount,
        HTMLBodyElementAttrs, WTF_ARRAY_LENGTH(HTMLBodyElementAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLBodyElement::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8HTMLBodyElement::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8HTMLBodyElementTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8HTMLBodyElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLBodyElement::wrapSlow(HTMLBodyElement* impl)
{
    v8::Handle<v8::Object> wrapper;
    V8Proxy* proxy = 0;
    if (impl->document()) {
        proxy = V8Proxy::retrieve(impl->document()->frame());
        if (proxy && static_cast<Node*>(impl->document()) == static_cast<Node*>(impl)) {
            if (proxy->windowShell()->initContextIfNeeded()) {
                // initContextIfNeeded may have created a wrapper for the object, retry from the start.
                return V8HTMLBodyElement::wrap(impl);
            }
        }
    }


    v8::Handle<v8::Context> context;
    if (proxy)
        context = proxy->context();

    // Enter the node's context and create the wrapper in that context.
    if (!context.IsEmpty())
        context->Enter();
    wrapper = V8DOMWrapper::instantiateV8Object(proxy, &info, impl);
    // Exit the node's context if it was entered.
    if (!context.IsEmpty())
        context->Exit();
    if (wrapper.IsEmpty())
        return wrapper;

    impl->ref();
    v8::Persistent<v8::Object> wrapperHandle = v8::Persistent<v8::Object>::New(wrapper);

    if (!hasDependentLifetime)
        wrapperHandle.MarkIndependent();
    wrapperHandle.SetWrapperClassId(v8DOMSubtreeClassId);
    getDOMNodeMap().set(impl, wrapperHandle);
    return wrapper;
}

void V8HTMLBodyElement::derefObject(void* object)
{
    static_cast<HTMLBodyElement*>(object)->deref();
}

} // namespace WebCore