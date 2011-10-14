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

#ifndef V8HTMLAreaElement_h
#define V8HTMLAreaElement_h

#include "HTMLAreaElement.h"
#include "V8DOMWrapper.h"
#include "V8HTMLElement.h"
#include "WrapperTypeInfo.h"
#include <wtf/text/StringHash.h>
#include <v8.h>
#include <wtf/HashMap.h>

namespace WebCore {

class V8HTMLAreaElement {
public:
    static const bool hasDependentLifetime = V8HTMLElement::hasDependentLifetime;
    static bool HasInstance(v8::Handle<v8::Value> value);
    static v8::Persistent<v8::FunctionTemplate> GetRawTemplate();
    static v8::Persistent<v8::FunctionTemplate> GetTemplate();
    static HTMLAreaElement* toNative(v8::Handle<v8::Object> object)
    {
        return reinterpret_cast<HTMLAreaElement*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
    }
    inline static v8::Handle<v8::Object> wrap(HTMLAreaElement*);
    static void derefObject(void*);
    static WrapperTypeInfo info;
    static const int internalFieldCount = v8DefaultWrapperInternalFieldCount + 0;
private:
    static v8::Handle<v8::Object> wrapSlow(HTMLAreaElement*);
};


v8::Handle<v8::Object> V8HTMLAreaElement::wrap(HTMLAreaElement* impl)
{
        v8::Handle<v8::Object> wrapper = V8DOMWrapper::getWrapper(impl);
        if (!wrapper.IsEmpty())
            return wrapper;
    return V8HTMLAreaElement::wrapSlow(impl);
}

inline v8::Handle<v8::Value> toV8(HTMLAreaElement* impl)
{
    if (!impl)
        return v8::Null();
    return V8HTMLAreaElement::wrap(impl);
}
inline v8::Handle<v8::Value> toV8(PassRefPtr< HTMLAreaElement > impl)
{
    return toV8(impl.get());
}
}

#endif // V8HTMLAreaElement_h