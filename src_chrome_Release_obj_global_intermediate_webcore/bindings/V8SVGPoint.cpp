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
#include "V8SVGPoint.h"

#if ENABLE(SVG)

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "SVGAnimatedPropertyTearOff.h"
#include "SVGPropertyTearOff.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include "V8SVGMatrix.h"

namespace WebCore {

WrapperTypeInfo V8SVGPoint::info = { V8SVGPoint::GetTemplate, V8SVGPoint::derefObject, 0, 0 };

namespace SVGPointInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> xAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPoint.x._get");
    SVGPropertyTearOff<FloatPoint>* wrapper = V8SVGPoint::toNative(info.Holder());
    FloatPoint& impInstance = wrapper->propertyReference();
    FloatPoint* imp = &impInstance;
    return v8::Number::New(imp->x());
}

static void xAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPoint.x._set");
    SVGPropertyTearOff<FloatPoint>* wrapper = V8SVGPoint::toNative(info.Holder());
    if (wrapper->role() == AnimValRole) {
        V8Proxy::setDOMException(NO_MODIFICATION_ALLOWED_ERR);
        return;
    }
    FloatPoint& impInstance = wrapper->propertyReference();
    FloatPoint* imp = &impInstance;
    float v = static_cast<float>(value->NumberValue());
    imp->setX(v);
    wrapper->commitChange();
    return;
}

static v8::Handle<v8::Value> yAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPoint.y._get");
    SVGPropertyTearOff<FloatPoint>* wrapper = V8SVGPoint::toNative(info.Holder());
    FloatPoint& impInstance = wrapper->propertyReference();
    FloatPoint* imp = &impInstance;
    return v8::Number::New(imp->y());
}

static void yAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPoint.y._set");
    SVGPropertyTearOff<FloatPoint>* wrapper = V8SVGPoint::toNative(info.Holder());
    if (wrapper->role() == AnimValRole) {
        V8Proxy::setDOMException(NO_MODIFICATION_ALLOWED_ERR);
        return;
    }
    FloatPoint& impInstance = wrapper->propertyReference();
    FloatPoint* imp = &impInstance;
    float v = static_cast<float>(value->NumberValue());
    imp->setY(v);
    wrapper->commitChange();
    return;
}

static v8::Handle<v8::Value> matrixTransformCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPoint.matrixTransform");
    if (args.Length() < 1)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    RefPtr<SVGPropertyTearOff<FloatPoint> > wrapper = V8SVGPoint::toNative(args.Holder());
    if (wrapper->role() == AnimValRole) {
        V8Proxy::setDOMException(NO_MODIFICATION_ALLOWED_ERR);
        return v8::Handle<v8::Value>();
    }
    FloatPoint& impInstance = wrapper->propertyReference();
    FloatPoint* imp = &impInstance;
    if (args.Length() > 0 && !isUndefinedOrNull(args[0]) && !V8SVGMatrix::HasInstance(args[0])) {
        V8Proxy::throwTypeError();
        return notHandledByInterceptor();
    }
    EXCEPTION_BLOCK(RefPtr<SVGPropertyTearOff<SVGMatrix> >, matrix, V8SVGMatrix::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)) ? V8SVGMatrix::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined))) : 0);
    if (!matrix) {
        V8Proxy::setDOMException(WebCore::TYPE_MISMATCH_ERR);
        return v8::Handle<v8::Value>();
    }
    return toV8(WTF::getPtr(SVGPropertyTearOff<FloatPoint>::create(imp->matrixTransform(matrix->propertyReference()))));
}

} // namespace SVGPointInternal

static const BatchedAttribute SVGPointAttrs[] = {
    // Attribute 'x' (Type: 'attribute' ExtAttr: 'StrictTypeChecking')
    {"x", SVGPointInternal::xAttrGetter, SVGPointInternal::xAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'y' (Type: 'attribute' ExtAttr: 'StrictTypeChecking')
    {"y", SVGPointInternal::yAttrGetter, SVGPointInternal::yAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const BatchedCallback SVGPointCallbacks[] = {
    {"matrixTransform", SVGPointInternal::matrixTransformCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGPointTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "SVGPoint", v8::Persistent<v8::FunctionTemplate>(), V8SVGPoint::internalFieldCount,
        SVGPointAttrs, WTF_ARRAY_LENGTH(SVGPointAttrs),
        SVGPointCallbacks, WTF_ARRAY_LENGTH(SVGPointCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGPoint::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8SVGPoint::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8SVGPointTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8SVGPoint::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGPoint::wrapSlow(SVGPropertyTearOff<FloatPoint>* impl)
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

void V8SVGPoint::derefObject(void* object)
{
    static_cast<SVGPropertyTearOff<FloatPoint>*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG)
