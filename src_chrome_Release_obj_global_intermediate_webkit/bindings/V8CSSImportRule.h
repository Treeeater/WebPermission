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

#ifndef V8CSSImportRule_h
#define V8CSSImportRule_h

#include "CSSImportRule.h"
#include "V8CSSRule.h"
#include "V8DOMWrapper.h"
#include "WrapperTypeInfo.h"
#include <wtf/text/StringHash.h>
#include <v8.h>
#include <wtf/HashMap.h>

namespace WebCore {

class V8CSSImportRule {
public:
    static const bool hasDependentLifetime = V8CSSRule::hasDependentLifetime;
    static bool HasInstance(v8::Handle<v8::Value> value);
    static v8::Persistent<v8::FunctionTemplate> GetRawTemplate();
    static v8::Persistent<v8::FunctionTemplate> GetTemplate();
    static CSSImportRule* toNative(v8::Handle<v8::Object> object)
    {
        return reinterpret_cast<CSSImportRule*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
    }
    inline static v8::Handle<v8::Object> wrap(CSSImportRule*);
    static void derefObject(void*);
    static WrapperTypeInfo info;
    static const int internalFieldCount = v8DefaultWrapperInternalFieldCount + 0;
private:
    static v8::Handle<v8::Object> wrapSlow(CSSImportRule*);
};


v8::Handle<v8::Object> V8CSSImportRule::wrap(CSSImportRule* impl)
{
        v8::Handle<v8::Object> wrapper = getDOMObjectMap().get(impl);
        if (!wrapper.IsEmpty())
            return wrapper;
    return V8CSSImportRule::wrapSlow(impl);
}

inline v8::Handle<v8::Value> toV8(CSSImportRule* impl)
{
    if (!impl)
        return v8::Null();
    return V8CSSImportRule::wrap(impl);
}
inline v8::Handle<v8::Value> toV8(PassRefPtr< CSSImportRule > impl)
{
    return toV8(impl.get());
}
}

#endif // V8CSSImportRule_h
