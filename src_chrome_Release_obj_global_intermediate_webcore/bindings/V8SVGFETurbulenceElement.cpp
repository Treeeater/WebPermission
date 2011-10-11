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
#include "V8SVGFETurbulenceElement.h"

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
#include "V8SVGAnimatedInteger.h"
#include "V8SVGAnimatedLength.h"
#include "V8SVGAnimatedNumber.h"
#include "V8SVGAnimatedString.h"
#include "V8SVGElement.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8SVGFETurbulenceElement::info = { V8SVGFETurbulenceElement::GetTemplate, V8SVGFETurbulenceElement::derefObject, 0, &V8SVGElement::info };

namespace SVGFETurbulenceElementInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> baseFrequencyXAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFETurbulenceElement.baseFrequencyX._get");
    SVGFETurbulenceElement* imp = V8SVGFETurbulenceElement::toNative(info.Holder());
    return toV8(imp->baseFrequencyXAnimated());
}

static v8::Handle<v8::Value> baseFrequencyYAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFETurbulenceElement.baseFrequencyY._get");
    SVGFETurbulenceElement* imp = V8SVGFETurbulenceElement::toNative(info.Holder());
    return toV8(imp->baseFrequencyYAnimated());
}

static v8::Handle<v8::Value> numOctavesAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFETurbulenceElement.numOctaves._get");
    SVGFETurbulenceElement* imp = V8SVGFETurbulenceElement::toNative(info.Holder());
    return toV8(imp->numOctavesAnimated());
}

static v8::Handle<v8::Value> seedAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFETurbulenceElement.seed._get");
    SVGFETurbulenceElement* imp = V8SVGFETurbulenceElement::toNative(info.Holder());
    return toV8(imp->seedAnimated());
}

static v8::Handle<v8::Value> stitchTilesAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFETurbulenceElement.stitchTiles._get");
    SVGFETurbulenceElement* imp = V8SVGFETurbulenceElement::toNative(info.Holder());
    return toV8(static_pointer_cast<SVGAnimatedEnumeration>(imp->stitchTilesAnimated()));
}

static v8::Handle<v8::Value> typeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFETurbulenceElement.type._get");
    SVGFETurbulenceElement* imp = V8SVGFETurbulenceElement::toNative(info.Holder());
    return toV8(static_pointer_cast<SVGAnimatedEnumeration>(imp->typeAnimated()));
}

static v8::Handle<v8::Value> xAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFETurbulenceElement.x._get");
    SVGFETurbulenceElement* imp = V8SVGFETurbulenceElement::toNative(info.Holder());
    return toV8(imp->xAnimated());
}

static v8::Handle<v8::Value> yAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFETurbulenceElement.y._get");
    SVGFETurbulenceElement* imp = V8SVGFETurbulenceElement::toNative(info.Holder());
    return toV8(imp->yAnimated());
}

static v8::Handle<v8::Value> widthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFETurbulenceElement.width._get");
    SVGFETurbulenceElement* imp = V8SVGFETurbulenceElement::toNative(info.Holder());
    return toV8(imp->widthAnimated());
}

static v8::Handle<v8::Value> heightAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFETurbulenceElement.height._get");
    SVGFETurbulenceElement* imp = V8SVGFETurbulenceElement::toNative(info.Holder());
    return toV8(imp->heightAnimated());
}

static v8::Handle<v8::Value> resultAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFETurbulenceElement.result._get");
    SVGFETurbulenceElement* imp = V8SVGFETurbulenceElement::toNative(info.Holder());
    return toV8(imp->resultAnimated());
}

static v8::Handle<v8::Value> classNameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFETurbulenceElement.className._get");
    SVGFETurbulenceElement* imp = V8SVGFETurbulenceElement::toNative(info.Holder());
    return toV8(imp->classNameAnimated());
}

static v8::Handle<v8::Value> styleAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGFETurbulenceElement.style._get");
    SVGFETurbulenceElement* imp = V8SVGFETurbulenceElement::toNative(info.Holder());
    return toV8(imp->style());
}

static v8::Handle<v8::Value> getPresentationAttributeCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGFETurbulenceElement.getPresentationAttribute");
    SVGFETurbulenceElement* imp = V8SVGFETurbulenceElement::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, name, MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined));
    return toV8(imp->getPresentationAttribute(name));
}

} // namespace SVGFETurbulenceElementInternal

static const BatchedAttribute SVGFETurbulenceElementAttrs[] = {
    // Attribute 'baseFrequencyX' (Type: 'readonly attribute' ExtAttr: '')
    {"baseFrequencyX", SVGFETurbulenceElementInternal::baseFrequencyXAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'baseFrequencyY' (Type: 'readonly attribute' ExtAttr: '')
    {"baseFrequencyY", SVGFETurbulenceElementInternal::baseFrequencyYAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'numOctaves' (Type: 'readonly attribute' ExtAttr: '')
    {"numOctaves", SVGFETurbulenceElementInternal::numOctavesAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'seed' (Type: 'readonly attribute' ExtAttr: '')
    {"seed", SVGFETurbulenceElementInternal::seedAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'stitchTiles' (Type: 'readonly attribute' ExtAttr: '')
    {"stitchTiles", SVGFETurbulenceElementInternal::stitchTilesAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'type' (Type: 'readonly attribute' ExtAttr: '')
    {"type", SVGFETurbulenceElementInternal::typeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'x' (Type: 'readonly attribute' ExtAttr: '')
    {"x", SVGFETurbulenceElementInternal::xAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'y' (Type: 'readonly attribute' ExtAttr: '')
    {"y", SVGFETurbulenceElementInternal::yAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'width' (Type: 'readonly attribute' ExtAttr: '')
    {"width", SVGFETurbulenceElementInternal::widthAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'height' (Type: 'readonly attribute' ExtAttr: '')
    {"height", SVGFETurbulenceElementInternal::heightAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'result' (Type: 'readonly attribute' ExtAttr: '')
    {"result", SVGFETurbulenceElementInternal::resultAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'className' (Type: 'readonly attribute' ExtAttr: '')
    {"className", SVGFETurbulenceElementInternal::classNameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'style' (Type: 'readonly attribute' ExtAttr: '')
    {"style", SVGFETurbulenceElementInternal::styleAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const BatchedCallback SVGFETurbulenceElementCallbacks[] = {
    {"getPresentationAttribute", SVGFETurbulenceElementInternal::getPresentationAttributeCallback},
};

static const BatchedConstant SVGFETurbulenceElementConsts[] = {
    {"SVG_TURBULENCE_TYPE_UNKNOWN", static_cast<signed int>(0)},
    {"SVG_TURBULENCE_TYPE_FRACTALNOISE", static_cast<signed int>(1)},
    {"SVG_TURBULENCE_TYPE_TURBULENCE", static_cast<signed int>(2)},
    {"SVG_STITCHTYPE_UNKNOWN", static_cast<signed int>(0)},
    {"SVG_STITCHTYPE_STITCH", static_cast<signed int>(1)},
    {"SVG_STITCHTYPE_NOSTITCH", static_cast<signed int>(2)},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGFETurbulenceElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "SVGFETurbulenceElement", V8SVGElement::GetTemplate(), V8SVGFETurbulenceElement::internalFieldCount,
        SVGFETurbulenceElementAttrs, WTF_ARRAY_LENGTH(SVGFETurbulenceElementAttrs),
        SVGFETurbulenceElementCallbacks, WTF_ARRAY_LENGTH(SVGFETurbulenceElementCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    
    batchConfigureConstants(desc, proto, SVGFETurbulenceElementConsts, WTF_ARRAY_LENGTH(SVGFETurbulenceElementConsts));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGFETurbulenceElement::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8SVGFETurbulenceElement::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8SVGFETurbulenceElementTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8SVGFETurbulenceElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGFETurbulenceElement::wrapSlow(SVGFETurbulenceElement* impl)
{
    v8::Handle<v8::Object> wrapper;
    V8Proxy* proxy = 0;
    if (impl->document()) {
        proxy = V8Proxy::retrieve(impl->document()->frame());
        if (proxy && static_cast<Node*>(impl->document()) == static_cast<Node*>(impl)) {
            if (proxy->windowShell()->initContextIfNeeded()) {
                // initContextIfNeeded may have created a wrapper for the object, retry from the start.
                return V8SVGFETurbulenceElement::wrap(impl);
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

void V8SVGFETurbulenceElement::derefObject(void* object)
{
    static_cast<SVGFETurbulenceElement*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG) && ENABLE(FILTERS)
