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
#include "V8SVGFEDisplacementMapElement.h"

#if ENABLE(SVG) && ENABLE(FILTERS)

#include "CSSMutableStyleDeclaration.h"
#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8CSSStyleDeclaration.h"
#include "V8CSSValue.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include "V8SVGAnimatedEnumeration.h"
#include "V8SVGAnimatedLength.h"
#include "V8SVGAnimatedNumber.h"
#include "V8SVGAnimatedString.h"
#include "V8SVGElement.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8SVGFEDisplacementMapElement::info = { V8SVGFEDisplacementMapElement::GetTemplate, V8SVGFEDisplacementMapElement::derefObject, 0, &V8SVGElement::info };

namespace SVGFEDisplacementMapElementInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> in1AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFEDisplacementMapElement.in1._get");
    SVGFEDisplacementMapElement* imp = V8SVGFEDisplacementMapElement::toNative(info.Holder());
    return toV8(imp->in1Animated());
}

static v8::Handle<v8::Value> in2AttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFEDisplacementMapElement.in2._get");
    SVGFEDisplacementMapElement* imp = V8SVGFEDisplacementMapElement::toNative(info.Holder());
    return toV8(imp->in2Animated());
}

static v8::Handle<v8::Value> scaleAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFEDisplacementMapElement.scale._get");
    SVGFEDisplacementMapElement* imp = V8SVGFEDisplacementMapElement::toNative(info.Holder());
    return toV8(imp->scaleAnimated());
}

static v8::Handle<v8::Value> xChannelSelectorAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFEDisplacementMapElement.xChannelSelector._get");
    SVGFEDisplacementMapElement* imp = V8SVGFEDisplacementMapElement::toNative(info.Holder());
    return toV8(static_pointer_cast<SVGAnimatedEnumeration>(imp->xChannelSelectorAnimated()));
}

static v8::Handle<v8::Value> yChannelSelectorAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFEDisplacementMapElement.yChannelSelector._get");
    SVGFEDisplacementMapElement* imp = V8SVGFEDisplacementMapElement::toNative(info.Holder());
    return toV8(static_pointer_cast<SVGAnimatedEnumeration>(imp->yChannelSelectorAnimated()));
}

static v8::Handle<v8::Value> xAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFEDisplacementMapElement.x._get");
    SVGFEDisplacementMapElement* imp = V8SVGFEDisplacementMapElement::toNative(info.Holder());
    return toV8(imp->xAnimated());
}

static v8::Handle<v8::Value> yAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFEDisplacementMapElement.y._get");
    SVGFEDisplacementMapElement* imp = V8SVGFEDisplacementMapElement::toNative(info.Holder());
    return toV8(imp->yAnimated());
}

static v8::Handle<v8::Value> widthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFEDisplacementMapElement.width._get");
    SVGFEDisplacementMapElement* imp = V8SVGFEDisplacementMapElement::toNative(info.Holder());
    return toV8(imp->widthAnimated());
}

static v8::Handle<v8::Value> heightAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFEDisplacementMapElement.height._get");
    SVGFEDisplacementMapElement* imp = V8SVGFEDisplacementMapElement::toNative(info.Holder());
    return toV8(imp->heightAnimated());
}

static v8::Handle<v8::Value> resultAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFEDisplacementMapElement.result._get");
    SVGFEDisplacementMapElement* imp = V8SVGFEDisplacementMapElement::toNative(info.Holder());
    return toV8(imp->resultAnimated());
}

static v8::Handle<v8::Value> classNameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFEDisplacementMapElement.className._get");
    SVGFEDisplacementMapElement* imp = V8SVGFEDisplacementMapElement::toNative(info.Holder());
    return toV8(imp->classNameAnimated());
}

static v8::Handle<v8::Value> styleAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFEDisplacementMapElement.style._get");
    SVGFEDisplacementMapElement* imp = V8SVGFEDisplacementMapElement::toNative(info.Holder());
    return toV8(imp->style());
}

static v8::Handle<v8::Value> getPresentationAttributeCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGFEDisplacementMapElement.getPresentationAttribute");
    SVGFEDisplacementMapElement* imp = V8SVGFEDisplacementMapElement::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, name, MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined));
    return toV8(imp->getPresentationAttribute(name));
}

} // namespace SVGFEDisplacementMapElementInternal

static const BatchedAttribute SVGFEDisplacementMapElementAttrs[] = {
    // Attribute 'in1' (Type: 'readonly attribute' ExtAttr: '')
    {"in1", SVGFEDisplacementMapElementInternal::in1AttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'in2' (Type: 'readonly attribute' ExtAttr: '')
    {"in2", SVGFEDisplacementMapElementInternal::in2AttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'scale' (Type: 'readonly attribute' ExtAttr: '')
    {"scale", SVGFEDisplacementMapElementInternal::scaleAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'xChannelSelector' (Type: 'readonly attribute' ExtAttr: '')
    {"xChannelSelector", SVGFEDisplacementMapElementInternal::xChannelSelectorAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'yChannelSelector' (Type: 'readonly attribute' ExtAttr: '')
    {"yChannelSelector", SVGFEDisplacementMapElementInternal::yChannelSelectorAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'x' (Type: 'readonly attribute' ExtAttr: '')
    {"x", SVGFEDisplacementMapElementInternal::xAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'y' (Type: 'readonly attribute' ExtAttr: '')
    {"y", SVGFEDisplacementMapElementInternal::yAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'width' (Type: 'readonly attribute' ExtAttr: '')
    {"width", SVGFEDisplacementMapElementInternal::widthAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'height' (Type: 'readonly attribute' ExtAttr: '')
    {"height", SVGFEDisplacementMapElementInternal::heightAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'result' (Type: 'readonly attribute' ExtAttr: '')
    {"result", SVGFEDisplacementMapElementInternal::resultAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'className' (Type: 'readonly attribute' ExtAttr: '')
    {"className", SVGFEDisplacementMapElementInternal::classNameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'style' (Type: 'readonly attribute' ExtAttr: '')
    {"style", SVGFEDisplacementMapElementInternal::styleAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const BatchedCallback SVGFEDisplacementMapElementCallbacks[] = {
    {"getPresentationAttribute", SVGFEDisplacementMapElementInternal::getPresentationAttributeCallback},
};

static const BatchedConstant SVGFEDisplacementMapElementConsts[] = {
    {"SVG_CHANNEL_UNKNOWN", static_cast<signed int>(0)},
    {"SVG_CHANNEL_R", static_cast<signed int>(1)},
    {"SVG_CHANNEL_G", static_cast<signed int>(2)},
    {"SVG_CHANNEL_B", static_cast<signed int>(3)},
    {"SVG_CHANNEL_A", static_cast<signed int>(4)},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGFEDisplacementMapElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "SVGFEDisplacementMapElement", V8SVGElement::GetTemplate(), V8SVGFEDisplacementMapElement::internalFieldCount,
        SVGFEDisplacementMapElementAttrs, WTF_ARRAY_LENGTH(SVGFEDisplacementMapElementAttrs),
        SVGFEDisplacementMapElementCallbacks, WTF_ARRAY_LENGTH(SVGFEDisplacementMapElementCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    
    batchConfigureConstants(desc, proto, SVGFEDisplacementMapElementConsts, WTF_ARRAY_LENGTH(SVGFEDisplacementMapElementConsts));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGFEDisplacementMapElement::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8SVGFEDisplacementMapElement::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8SVGFEDisplacementMapElementTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8SVGFEDisplacementMapElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGFEDisplacementMapElement::wrapSlow(SVGFEDisplacementMapElement* impl)
{
    v8::Handle<v8::Object> wrapper;
    V8Proxy* proxy = 0;
    if (impl->document()) {
        proxy = V8Proxy::retrieve(impl->document()->frame());
        if (proxy && static_cast<Node*>(impl->document()) == static_cast<Node*>(impl)) {
            if (proxy->windowShell()->initContextIfNeeded()) {
                // initContextIfNeeded may have created a wrapper for the object, retry from the start.
                return V8SVGFEDisplacementMapElement::wrap(impl);
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

void V8SVGFEDisplacementMapElement::derefObject(void* object)
{
    static_cast<SVGFEDisplacementMapElement*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG) && ENABLE(FILTERS)
