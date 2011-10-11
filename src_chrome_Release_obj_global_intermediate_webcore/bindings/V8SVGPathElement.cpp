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
#include "V8SVGPathElement.h"

#if ENABLE(SVG)

#include "CSSMutableStyleDeclaration.h"
#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "SVGPathSegArc.h"
#include "SVGPathSegClosePath.h"
#include "SVGPathSegCurvetoCubic.h"
#include "SVGPathSegCurvetoCubicSmooth.h"
#include "SVGPathSegCurvetoQuadratic.h"
#include "SVGPathSegCurvetoQuadraticSmooth.h"
#include "SVGPathSegLineto.h"
#include "SVGPathSegLinetoHorizontal.h"
#include "SVGPathSegLinetoVertical.h"
#include "SVGPathSegMoveto.h"
#include "SVGPropertyTearOff.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8CSSStyleDeclaration.h"
#include "V8CSSValue.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include "V8SVGAnimatedBoolean.h"
#include "V8SVGAnimatedNumber.h"
#include "V8SVGAnimatedString.h"
#include "V8SVGAnimatedTransformList.h"
#include "V8SVGElement.h"
#include "V8SVGMatrix.h"
#include "V8SVGPathSegArcAbs.h"
#include "V8SVGPathSegArcRel.h"
#include "V8SVGPathSegClosePath.h"
#include "V8SVGPathSegCurvetoCubicAbs.h"
#include "V8SVGPathSegCurvetoCubicRel.h"
#include "V8SVGPathSegCurvetoCubicSmoothAbs.h"
#include "V8SVGPathSegCurvetoCubicSmoothRel.h"
#include "V8SVGPathSegCurvetoQuadraticAbs.h"
#include "V8SVGPathSegCurvetoQuadraticRel.h"
#include "V8SVGPathSegCurvetoQuadraticSmoothAbs.h"
#include "V8SVGPathSegCurvetoQuadraticSmoothRel.h"
#include "V8SVGPathSegLinetoAbs.h"
#include "V8SVGPathSegLinetoHorizontalAbs.h"
#include "V8SVGPathSegLinetoHorizontalRel.h"
#include "V8SVGPathSegLinetoRel.h"
#include "V8SVGPathSegLinetoVerticalAbs.h"
#include "V8SVGPathSegLinetoVerticalRel.h"
#include "V8SVGPathSegList.h"
#include "V8SVGPathSegMovetoAbs.h"
#include "V8SVGPathSegMovetoRel.h"
#include "V8SVGPoint.h"
#include "V8SVGRect.h"
#include "V8SVGStringList.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8SVGPathElement::info = { V8SVGPathElement::GetTemplate, V8SVGPathElement::derefObject, 0, &V8SVGElement::info };

namespace SVGPathElementInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> pathLengthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPathElement.pathLength._get");
    SVGPathElement* imp = V8SVGPathElement::toNative(info.Holder());
    return toV8(imp->pathLengthAnimated());
}

static v8::Handle<v8::Value> pathSegListAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPathElement.pathSegList._get");
    SVGPathElement* imp = V8SVGPathElement::toNative(info.Holder());
    return toV8(WTF::getPtr(imp->pathSegList()));
}

static v8::Handle<v8::Value> normalizedPathSegListAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPathElement.normalizedPathSegList._get");
    SVGPathElement* imp = V8SVGPathElement::toNative(info.Holder());
    return toV8(WTF::getPtr(imp->normalizedPathSegList()));
}

static v8::Handle<v8::Value> animatedPathSegListAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPathElement.animatedPathSegList._get");
    SVGPathElement* imp = V8SVGPathElement::toNative(info.Holder());
    return toV8(WTF::getPtr(imp->animatedPathSegList()));
}

static v8::Handle<v8::Value> animatedNormalizedPathSegListAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPathElement.animatedNormalizedPathSegList._get");
    SVGPathElement* imp = V8SVGPathElement::toNative(info.Holder());
    return toV8(WTF::getPtr(imp->animatedNormalizedPathSegList()));
}

static v8::Handle<v8::Value> requiredFeaturesAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPathElement.requiredFeatures._get");
    SVGPathElement* imp = V8SVGPathElement::toNative(info.Holder());
    return toV8(WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(imp, imp->requiredFeatures())));
}

static v8::Handle<v8::Value> requiredExtensionsAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPathElement.requiredExtensions._get");
    SVGPathElement* imp = V8SVGPathElement::toNative(info.Holder());
    return toV8(WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(imp, imp->requiredExtensions())));
}

static v8::Handle<v8::Value> systemLanguageAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPathElement.systemLanguage._get");
    SVGPathElement* imp = V8SVGPathElement::toNative(info.Holder());
    return toV8(WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(imp, imp->systemLanguage())));
}

static v8::Handle<v8::Value> xmllangAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPathElement.xmllang._get");
    SVGPathElement* imp = V8SVGPathElement::toNative(info.Holder());
    return v8String(imp->xmllang());
}

static void xmllangAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPathElement.xmllang._set");
    SVGPathElement* imp = V8SVGPathElement::toNative(info.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK_VOID(V8Parameter<>, v, value);
    imp->setXmllang(v);
    return;
}

static v8::Handle<v8::Value> xmlspaceAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPathElement.xmlspace._get");
    SVGPathElement* imp = V8SVGPathElement::toNative(info.Holder());
    return v8String(imp->xmlspace());
}

static void xmlspaceAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPathElement.xmlspace._set");
    SVGPathElement* imp = V8SVGPathElement::toNative(info.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK_VOID(V8Parameter<>, v, value);
    imp->setXmlspace(v);
    return;
}

static v8::Handle<v8::Value> externalResourcesRequiredAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPathElement.externalResourcesRequired._get");
    SVGPathElement* imp = V8SVGPathElement::toNative(info.Holder());
    return toV8(imp->externalResourcesRequiredAnimated());
}

static v8::Handle<v8::Value> classNameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPathElement.className._get");
    SVGPathElement* imp = V8SVGPathElement::toNative(info.Holder());
    return toV8(imp->classNameAnimated());
}

static v8::Handle<v8::Value> styleAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPathElement.style._get");
    SVGPathElement* imp = V8SVGPathElement::toNative(info.Holder());
    return toV8(imp->style());
}

static v8::Handle<v8::Value> transformAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPathElement.transform._get");
    SVGPathElement* imp = V8SVGPathElement::toNative(info.Holder());
    return toV8(imp->transformAnimated());
}

static v8::Handle<v8::Value> nearestViewportElementAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPathElement.nearestViewportElement._get");
    SVGPathElement* imp = V8SVGPathElement::toNative(info.Holder());
    return toV8(imp->nearestViewportElement());
}

static v8::Handle<v8::Value> farthestViewportElementAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPathElement.farthestViewportElement._get");
    SVGPathElement* imp = V8SVGPathElement::toNative(info.Holder());
    return toV8(imp->farthestViewportElement());
}

static v8::Handle<v8::Value> getTotalLengthCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPathElement.getTotalLength");
    SVGPathElement* imp = V8SVGPathElement::toNative(args.Holder());
    return v8::Number::New(imp->getTotalLength());
}

static v8::Handle<v8::Value> getPointAtLengthCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPathElement.getPointAtLength");
    SVGPathElement* imp = V8SVGPathElement::toNative(args.Holder());
    EXCEPTION_BLOCK(float, distance, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)->NumberValue()));
    return toV8(WTF::getPtr(SVGPropertyTearOff<FloatPoint>::create(imp->getPointAtLength(distance))));
}

static v8::Handle<v8::Value> getPathSegAtLengthCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPathElement.getPathSegAtLength");
    SVGPathElement* imp = V8SVGPathElement::toNative(args.Holder());
    EXCEPTION_BLOCK(float, distance, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)->NumberValue()));
    return v8::Integer::NewFromUnsigned(imp->getPathSegAtLength(distance));
}

static v8::Handle<v8::Value> createSVGPathSegClosePathCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPathElement.createSVGPathSegClosePath");
    SVGPathElement* imp = V8SVGPathElement::toNative(args.Holder());
    return toV8(imp->createSVGPathSegClosePath());
}

static v8::Handle<v8::Value> createSVGPathSegMovetoAbsCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPathElement.createSVGPathSegMovetoAbs");
    SVGPathElement* imp = V8SVGPathElement::toNative(args.Holder());
    EXCEPTION_BLOCK(float, x, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, y, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 1, MissingIsUndefined)->NumberValue()));
    return toV8(imp->createSVGPathSegMovetoAbs(x, y));
}

static v8::Handle<v8::Value> createSVGPathSegMovetoRelCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPathElement.createSVGPathSegMovetoRel");
    SVGPathElement* imp = V8SVGPathElement::toNative(args.Holder());
    EXCEPTION_BLOCK(float, x, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, y, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 1, MissingIsUndefined)->NumberValue()));
    return toV8(imp->createSVGPathSegMovetoRel(x, y));
}

static v8::Handle<v8::Value> createSVGPathSegLinetoAbsCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPathElement.createSVGPathSegLinetoAbs");
    SVGPathElement* imp = V8SVGPathElement::toNative(args.Holder());
    EXCEPTION_BLOCK(float, x, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, y, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 1, MissingIsUndefined)->NumberValue()));
    return toV8(imp->createSVGPathSegLinetoAbs(x, y));
}

static v8::Handle<v8::Value> createSVGPathSegLinetoRelCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPathElement.createSVGPathSegLinetoRel");
    SVGPathElement* imp = V8SVGPathElement::toNative(args.Holder());
    EXCEPTION_BLOCK(float, x, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, y, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 1, MissingIsUndefined)->NumberValue()));
    return toV8(imp->createSVGPathSegLinetoRel(x, y));
}

static v8::Handle<v8::Value> createSVGPathSegCurvetoCubicAbsCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPathElement.createSVGPathSegCurvetoCubicAbs");
    SVGPathElement* imp = V8SVGPathElement::toNative(args.Holder());
    EXCEPTION_BLOCK(float, x, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, y, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 1, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, x1, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 2, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, y1, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 3, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, x2, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 4, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, y2, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 5, MissingIsUndefined)->NumberValue()));
    return toV8(imp->createSVGPathSegCurvetoCubicAbs(x, y, x1, y1, x2, y2));
}

static v8::Handle<v8::Value> createSVGPathSegCurvetoCubicRelCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPathElement.createSVGPathSegCurvetoCubicRel");
    SVGPathElement* imp = V8SVGPathElement::toNative(args.Holder());
    EXCEPTION_BLOCK(float, x, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, y, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 1, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, x1, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 2, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, y1, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 3, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, x2, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 4, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, y2, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 5, MissingIsUndefined)->NumberValue()));
    return toV8(imp->createSVGPathSegCurvetoCubicRel(x, y, x1, y1, x2, y2));
}

static v8::Handle<v8::Value> createSVGPathSegCurvetoQuadraticAbsCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPathElement.createSVGPathSegCurvetoQuadraticAbs");
    SVGPathElement* imp = V8SVGPathElement::toNative(args.Holder());
    EXCEPTION_BLOCK(float, x, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, y, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 1, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, x1, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 2, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, y1, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 3, MissingIsUndefined)->NumberValue()));
    return toV8(imp->createSVGPathSegCurvetoQuadraticAbs(x, y, x1, y1));
}

static v8::Handle<v8::Value> createSVGPathSegCurvetoQuadraticRelCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPathElement.createSVGPathSegCurvetoQuadraticRel");
    SVGPathElement* imp = V8SVGPathElement::toNative(args.Holder());
    EXCEPTION_BLOCK(float, x, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, y, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 1, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, x1, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 2, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, y1, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 3, MissingIsUndefined)->NumberValue()));
    return toV8(imp->createSVGPathSegCurvetoQuadraticRel(x, y, x1, y1));
}

static v8::Handle<v8::Value> createSVGPathSegArcAbsCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPathElement.createSVGPathSegArcAbs");
    SVGPathElement* imp = V8SVGPathElement::toNative(args.Holder());
    EXCEPTION_BLOCK(float, x, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, y, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 1, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, r1, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 2, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, r2, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 3, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, angle, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 4, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(bool, largeArcFlag, MAYBE_MISSING_PARAMETER(args, 5, MissingIsUndefined)->BooleanValue());
    EXCEPTION_BLOCK(bool, sweepFlag, MAYBE_MISSING_PARAMETER(args, 6, MissingIsUndefined)->BooleanValue());
    return toV8(imp->createSVGPathSegArcAbs(x, y, r1, r2, angle, largeArcFlag, sweepFlag));
}

static v8::Handle<v8::Value> createSVGPathSegArcRelCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPathElement.createSVGPathSegArcRel");
    SVGPathElement* imp = V8SVGPathElement::toNative(args.Holder());
    EXCEPTION_BLOCK(float, x, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, y, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 1, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, r1, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 2, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, r2, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 3, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, angle, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 4, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(bool, largeArcFlag, MAYBE_MISSING_PARAMETER(args, 5, MissingIsUndefined)->BooleanValue());
    EXCEPTION_BLOCK(bool, sweepFlag, MAYBE_MISSING_PARAMETER(args, 6, MissingIsUndefined)->BooleanValue());
    return toV8(imp->createSVGPathSegArcRel(x, y, r1, r2, angle, largeArcFlag, sweepFlag));
}

static v8::Handle<v8::Value> createSVGPathSegLinetoHorizontalAbsCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPathElement.createSVGPathSegLinetoHorizontalAbs");
    SVGPathElement* imp = V8SVGPathElement::toNative(args.Holder());
    EXCEPTION_BLOCK(float, x, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)->NumberValue()));
    return toV8(imp->createSVGPathSegLinetoHorizontalAbs(x));
}

static v8::Handle<v8::Value> createSVGPathSegLinetoHorizontalRelCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPathElement.createSVGPathSegLinetoHorizontalRel");
    SVGPathElement* imp = V8SVGPathElement::toNative(args.Holder());
    EXCEPTION_BLOCK(float, x, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)->NumberValue()));
    return toV8(imp->createSVGPathSegLinetoHorizontalRel(x));
}

static v8::Handle<v8::Value> createSVGPathSegLinetoVerticalAbsCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPathElement.createSVGPathSegLinetoVerticalAbs");
    SVGPathElement* imp = V8SVGPathElement::toNative(args.Holder());
    EXCEPTION_BLOCK(float, y, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)->NumberValue()));
    return toV8(imp->createSVGPathSegLinetoVerticalAbs(y));
}

static v8::Handle<v8::Value> createSVGPathSegLinetoVerticalRelCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPathElement.createSVGPathSegLinetoVerticalRel");
    SVGPathElement* imp = V8SVGPathElement::toNative(args.Holder());
    EXCEPTION_BLOCK(float, y, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)->NumberValue()));
    return toV8(imp->createSVGPathSegLinetoVerticalRel(y));
}

static v8::Handle<v8::Value> createSVGPathSegCurvetoCubicSmoothAbsCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPathElement.createSVGPathSegCurvetoCubicSmoothAbs");
    SVGPathElement* imp = V8SVGPathElement::toNative(args.Holder());
    EXCEPTION_BLOCK(float, x, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, y, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 1, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, x2, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 2, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, y2, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 3, MissingIsUndefined)->NumberValue()));
    return toV8(imp->createSVGPathSegCurvetoCubicSmoothAbs(x, y, x2, y2));
}

static v8::Handle<v8::Value> createSVGPathSegCurvetoCubicSmoothRelCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPathElement.createSVGPathSegCurvetoCubicSmoothRel");
    SVGPathElement* imp = V8SVGPathElement::toNative(args.Holder());
    EXCEPTION_BLOCK(float, x, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, y, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 1, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, x2, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 2, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, y2, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 3, MissingIsUndefined)->NumberValue()));
    return toV8(imp->createSVGPathSegCurvetoCubicSmoothRel(x, y, x2, y2));
}

static v8::Handle<v8::Value> createSVGPathSegCurvetoQuadraticSmoothAbsCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPathElement.createSVGPathSegCurvetoQuadraticSmoothAbs");
    SVGPathElement* imp = V8SVGPathElement::toNative(args.Holder());
    EXCEPTION_BLOCK(float, x, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, y, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 1, MissingIsUndefined)->NumberValue()));
    return toV8(imp->createSVGPathSegCurvetoQuadraticSmoothAbs(x, y));
}

static v8::Handle<v8::Value> createSVGPathSegCurvetoQuadraticSmoothRelCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPathElement.createSVGPathSegCurvetoQuadraticSmoothRel");
    SVGPathElement* imp = V8SVGPathElement::toNative(args.Holder());
    EXCEPTION_BLOCK(float, x, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, y, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 1, MissingIsUndefined)->NumberValue()));
    return toV8(imp->createSVGPathSegCurvetoQuadraticSmoothRel(x, y));
}

static v8::Handle<v8::Value> hasExtensionCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPathElement.hasExtension");
    SVGPathElement* imp = V8SVGPathElement::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, extension, MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined));
    return v8Boolean(imp->hasExtension(extension));
}

static v8::Handle<v8::Value> getPresentationAttributeCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPathElement.getPresentationAttribute");
    SVGPathElement* imp = V8SVGPathElement::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, name, MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined));
    return toV8(imp->getPresentationAttribute(name));
}

static v8::Handle<v8::Value> getBBoxCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPathElement.getBBox");
    SVGPathElement* imp = V8SVGPathElement::toNative(args.Holder());
    return toV8(WTF::getPtr(SVGPropertyTearOff<FloatRect>::create(imp->getBBox())));
}

static v8::Handle<v8::Value> getCTMCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPathElement.getCTM");
    SVGPathElement* imp = V8SVGPathElement::toNative(args.Holder());
    return toV8(WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(imp->getCTM())));
}

static v8::Handle<v8::Value> getScreenCTMCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPathElement.getScreenCTM");
    SVGPathElement* imp = V8SVGPathElement::toNative(args.Holder());
    return toV8(WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(imp->getScreenCTM())));
}

static v8::Handle<v8::Value> getTransformToElementCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGPathElement.getTransformToElement");
    SVGPathElement* imp = V8SVGPathElement::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(SVGElement*, element, V8SVGElement::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)) ? V8SVGElement::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined))) : 0);
    SVGMatrix result = imp->getTransformToElement(element, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(result)));
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

} // namespace SVGPathElementInternal

static const BatchedAttribute SVGPathElementAttrs[] = {
    // Attribute 'pathLength' (Type: 'readonly attribute' ExtAttr: '')
    {"pathLength", SVGPathElementInternal::pathLengthAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'pathSegList' (Type: 'readonly attribute' ExtAttr: '')
    {"pathSegList", SVGPathElementInternal::pathSegListAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'normalizedPathSegList' (Type: 'readonly attribute' ExtAttr: '')
    {"normalizedPathSegList", SVGPathElementInternal::normalizedPathSegListAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'animatedPathSegList' (Type: 'readonly attribute' ExtAttr: '')
    {"animatedPathSegList", SVGPathElementInternal::animatedPathSegListAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'animatedNormalizedPathSegList' (Type: 'readonly attribute' ExtAttr: '')
    {"animatedNormalizedPathSegList", SVGPathElementInternal::animatedNormalizedPathSegListAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'requiredFeatures' (Type: 'readonly attribute' ExtAttr: '')
    {"requiredFeatures", SVGPathElementInternal::requiredFeaturesAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'requiredExtensions' (Type: 'readonly attribute' ExtAttr: '')
    {"requiredExtensions", SVGPathElementInternal::requiredExtensionsAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'systemLanguage' (Type: 'readonly attribute' ExtAttr: '')
    {"systemLanguage", SVGPathElementInternal::systemLanguageAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'xmllang' (Type: 'attribute' ExtAttr: '')
    {"xmllang", SVGPathElementInternal::xmllangAttrGetter, SVGPathElementInternal::xmllangAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'xmlspace' (Type: 'attribute' ExtAttr: '')
    {"xmlspace", SVGPathElementInternal::xmlspaceAttrGetter, SVGPathElementInternal::xmlspaceAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'externalResourcesRequired' (Type: 'readonly attribute' ExtAttr: '')
    {"externalResourcesRequired", SVGPathElementInternal::externalResourcesRequiredAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'className' (Type: 'readonly attribute' ExtAttr: '')
    {"className", SVGPathElementInternal::classNameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'style' (Type: 'readonly attribute' ExtAttr: '')
    {"style", SVGPathElementInternal::styleAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'transform' (Type: 'readonly attribute' ExtAttr: '')
    {"transform", SVGPathElementInternal::transformAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'nearestViewportElement' (Type: 'readonly attribute' ExtAttr: '')
    {"nearestViewportElement", SVGPathElementInternal::nearestViewportElementAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'farthestViewportElement' (Type: 'readonly attribute' ExtAttr: '')
    {"farthestViewportElement", SVGPathElementInternal::farthestViewportElementAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const BatchedCallback SVGPathElementCallbacks[] = {
    {"getTotalLength", SVGPathElementInternal::getTotalLengthCallback},
    {"getPointAtLength", SVGPathElementInternal::getPointAtLengthCallback},
    {"getPathSegAtLength", SVGPathElementInternal::getPathSegAtLengthCallback},
    {"createSVGPathSegClosePath", SVGPathElementInternal::createSVGPathSegClosePathCallback},
    {"createSVGPathSegMovetoAbs", SVGPathElementInternal::createSVGPathSegMovetoAbsCallback},
    {"createSVGPathSegMovetoRel", SVGPathElementInternal::createSVGPathSegMovetoRelCallback},
    {"createSVGPathSegLinetoAbs", SVGPathElementInternal::createSVGPathSegLinetoAbsCallback},
    {"createSVGPathSegLinetoRel", SVGPathElementInternal::createSVGPathSegLinetoRelCallback},
    {"createSVGPathSegCurvetoCubicAbs", SVGPathElementInternal::createSVGPathSegCurvetoCubicAbsCallback},
    {"createSVGPathSegCurvetoCubicRel", SVGPathElementInternal::createSVGPathSegCurvetoCubicRelCallback},
    {"createSVGPathSegCurvetoQuadraticAbs", SVGPathElementInternal::createSVGPathSegCurvetoQuadraticAbsCallback},
    {"createSVGPathSegCurvetoQuadraticRel", SVGPathElementInternal::createSVGPathSegCurvetoQuadraticRelCallback},
    {"createSVGPathSegArcAbs", SVGPathElementInternal::createSVGPathSegArcAbsCallback},
    {"createSVGPathSegArcRel", SVGPathElementInternal::createSVGPathSegArcRelCallback},
    {"createSVGPathSegLinetoHorizontalAbs", SVGPathElementInternal::createSVGPathSegLinetoHorizontalAbsCallback},
    {"createSVGPathSegLinetoHorizontalRel", SVGPathElementInternal::createSVGPathSegLinetoHorizontalRelCallback},
    {"createSVGPathSegLinetoVerticalAbs", SVGPathElementInternal::createSVGPathSegLinetoVerticalAbsCallback},
    {"createSVGPathSegLinetoVerticalRel", SVGPathElementInternal::createSVGPathSegLinetoVerticalRelCallback},
    {"createSVGPathSegCurvetoCubicSmoothAbs", SVGPathElementInternal::createSVGPathSegCurvetoCubicSmoothAbsCallback},
    {"createSVGPathSegCurvetoCubicSmoothRel", SVGPathElementInternal::createSVGPathSegCurvetoCubicSmoothRelCallback},
    {"createSVGPathSegCurvetoQuadraticSmoothAbs", SVGPathElementInternal::createSVGPathSegCurvetoQuadraticSmoothAbsCallback},
    {"createSVGPathSegCurvetoQuadraticSmoothRel", SVGPathElementInternal::createSVGPathSegCurvetoQuadraticSmoothRelCallback},
    {"hasExtension", SVGPathElementInternal::hasExtensionCallback},
    {"getPresentationAttribute", SVGPathElementInternal::getPresentationAttributeCallback},
    {"getBBox", SVGPathElementInternal::getBBoxCallback},
    {"getCTM", SVGPathElementInternal::getCTMCallback},
    {"getScreenCTM", SVGPathElementInternal::getScreenCTMCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGPathElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "SVGPathElement", V8SVGElement::GetTemplate(), V8SVGPathElement::internalFieldCount,
        SVGPathElementAttrs, WTF_ARRAY_LENGTH(SVGPathElementAttrs),
        SVGPathElementCallbacks, WTF_ARRAY_LENGTH(SVGPathElementCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom Signature 'getTransformToElement'
    const int getTransformToElementArgc = 1;
    v8::Handle<v8::FunctionTemplate> getTransformToElementArgv[getTransformToElementArgc] = { V8SVGElement::GetRawTemplate() };
    v8::Handle<v8::Signature> getTransformToElementSignature = v8::Signature::New(desc, getTransformToElementArgc, getTransformToElementArgv);
    proto->Set(v8::String::New("getTransformToElement"), v8::FunctionTemplate::New(SVGPathElementInternal::getTransformToElementCallback, v8::Handle<v8::Value>(), getTransformToElementSignature));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGPathElement::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8SVGPathElement::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8SVGPathElementTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8SVGPathElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGPathElement::wrapSlow(SVGPathElement* impl)
{
    v8::Handle<v8::Object> wrapper;
    V8Proxy* proxy = 0;
    if (impl->document()) {
        proxy = V8Proxy::retrieve(impl->document()->frame());
        if (proxy && static_cast<Node*>(impl->document()) == static_cast<Node*>(impl)) {
            if (proxy->windowShell()->initContextIfNeeded()) {
                // initContextIfNeeded may have created a wrapper for the object, retry from the start.
                return V8SVGPathElement::wrap(impl);
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

void V8SVGPathElement::derefObject(void* object)
{
    static_cast<SVGPathElement*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG)
