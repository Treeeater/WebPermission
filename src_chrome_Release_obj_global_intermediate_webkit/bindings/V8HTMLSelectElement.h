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

#ifndef V8HTMLSelectElement_h
#define V8HTMLSelectElement_h

#include "HTMLSelectElement.h"
#include "V8DOMWrapper.h"
#include "V8HTMLElement.h"
#include "WrapperTypeInfo.h"
#include <wtf/text/StringHash.h>
#include <v8.h>
#include <wtf/HashMap.h>

namespace WebCore {

class V8HTMLSelectElement {
public:
    static const bool hasDependentLifetime = V8HTMLElement::hasDependentLifetime;
    static bool HasInstance(v8::Handle<v8::Value> value);
    static v8::Persistent<v8::FunctionTemplate> GetRawTemplate();
    static v8::Persistent<v8::FunctionTemplate> GetTemplate();
    static HTMLSelectElement* toNative(v8::Handle<v8::Object> object)
    {
        return reinterpret_cast<HTMLSelectElement*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
    }
    inline static v8::Handle<v8::Object> wrap(HTMLSelectElement*);
    static void derefObject(void*);
    static WrapperTypeInfo info;
    static v8::Handle<v8::Value> removeCallback(const v8::Arguments&);
    static v8::Handle<v8::Value> indexedPropertyGetter(uint32_t, const v8::AccessorInfo&);
    static v8::Handle<v8::Value> indexedPropertySetter(uint32_t, v8::Local<v8::Value>, const v8::AccessorInfo&);
    static const int internalFieldCount = v8DefaultWrapperInternalFieldCount + 0;
private:
    static v8::Handle<v8::Object> wrapSlow(HTMLSelectElement*);
};


v8::Handle<v8::Object> V8HTMLSelectElement::wrap(HTMLSelectElement* impl)
{
        v8::Handle<v8::Object> wrapper = V8DOMWrapper::getWrapper(impl);
        if (!wrapper.IsEmpty())
            return wrapper;
    return V8HTMLSelectElement::wrapSlow(impl);
}

inline v8::Handle<v8::Value> toV8(HTMLSelectElement* impl)
{
    if (!impl)
        return v8::Null();
    return V8HTMLSelectElement::wrap(impl);
}
inline v8::Handle<v8::Value> toV8(PassRefPtr< HTMLSelectElement > impl)
{
    return toV8(impl.get());
}
}

#endif // V8HTMLSelectElement_h
