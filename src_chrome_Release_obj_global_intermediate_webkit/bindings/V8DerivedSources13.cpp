/*
 * THIS FILE WAS AUTOMATICALLY GENERATED, DO NOT EDIT.
 *
 * This file was generated by the make_jni_lists.py script.
 *
 * Copyright (C) 2009 Google Inc.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE COMPUTER, INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE COMPUTER, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
#define NO_IMPLICIT_ATOMICSTRING

#include "bindings/V8CSSPageRule.cpp"
#include "bindings/V8CanvasGradient.cpp"
#include "bindings/V8CustomEvent.cpp"
#include "bindings/V8DOMParser.cpp"
#include "bindings/V8HTMLMarqueeElement.cpp"
#include "bindings/V8HTMLOutputElement.cpp"
#include "bindings/V8HTMLScriptElement.cpp"
#include "bindings/V8ImageData.cpp"
#include "bindings/V8Notation.cpp"
#include "bindings/V8Uint16Array.cpp"
#include "bindings/V8WebKitPoint.cpp"

#if ENABLE(BLOB)
#include "bindings/V8DOMURL.cpp"
#endif

#if ENABLE(INDEXED_DATABASE)
#include "bindings/V8IDBVersionChangeEvent.cpp"
#endif

#if ENABLE(MEDIA_STREAM)
#include "bindings/V8NavigatorUserMediaErrorCallback.cpp"
#endif

#if ENABLE(QUOTA)
#include "bindings/V8StorageInfoUsageCallback.cpp"
#endif

#if ENABLE(SVG)
#include "bindings/V8SVGLengthList.cpp"
#include "bindings/V8SVGPathSegCurvetoCubicSmoothAbs.cpp"
#include "bindings/V8SVGPathSegCurvetoQuadraticSmoothRel.cpp"
#include "bindings/V8SVGPathSegLinetoAbs.cpp"
#include "bindings/V8SVGRadialGradientElement.cpp"
#include "bindings/V8SVGTextContentElement.cpp"
#include "bindings/V8SVGUnitTypes.cpp"
#include "bindings/V8SVGZoomEvent.cpp"
#endif

#if ENABLE(SVG) && ENABLE(FILTERS)
#include "bindings/V8SVGFEDropShadowElement.cpp"
#include "bindings/V8SVGFEFloodElement.cpp"
#include "bindings/V8SVGFESpotLightElement.cpp"
#include "bindings/V8SVGFilterElement.cpp"
#endif

#if ENABLE(SVG) && ENABLE(SVG_FONTS)
#include "bindings/V8SVGMissingGlyphElement.cpp"
#endif

#if ENABLE(TOUCH_EVENTS)
#include "bindings/V8TouchList.cpp"
#endif

#if ENABLE(VIDEO)
#include "bindings/V8HTMLAudioElement.cpp"
#endif

#if ENABLE(WEB_AUDIO)
#include "bindings/V8AudioBufferCallback.cpp"
#include "bindings/V8AudioListener.cpp"
#include "bindings/V8AudioPannerNode.cpp"
#endif

#if ENABLE(WEB_AUDIO) && ENABLE(VIDEO)
#include "bindings/V8MediaElementAudioSourceNode.cpp"
#endif

#if ENABLE(WEB_TIMING)
#include "bindings/V8Performance.cpp"
#endif
