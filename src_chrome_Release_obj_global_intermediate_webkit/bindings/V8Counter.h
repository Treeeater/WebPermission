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

#ifndef V8Counter_h
#define V8Counter_h

#include "Counter.h"
#include "V8DOMWrapper.h"
#include "WrapperTypeInfo.h"
#include <wtf/text/StringHash.h>
#include <v8.h>
#include <wtf/HashMap.h>

namespace WebCore {

class V8Counter {
public:
    static const bool hasDependentLifetime = false;
    static bool HasInstance(v8::Handle<v8::Value> value);
    static v8::Persistent<v8::FunctionTemplate> GetRawTemplate();
    static v8::Persistent<v8::FunctionTemplate> GetTemplate();
    static Counter* toNative(v8::Handle<v8::Object> object)
    {
        return reinterpret_cast<Counter*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
    }
    inline static v8::Handle<v8::Object> wrap(Counter*);
    static void derefObject(void*);
    static WrapperTypeInfo info;
    static const int internalFieldCount = v8DefaultWrapperInternalFieldCount + 0;
private:
    static v8::Handle<v8::Object> wrapSlow(Counter*);
};


v8::Handle<v8::Object> V8Counter::wrap(Counter* impl)
{
        v8::Handle<v8::Object> wrapper = getDOMObjectMap().get(impl);
        if (!wrapper.IsEmpty())
            return wrapper;
    return V8Counter::wrapSlow(impl);
}

inline v8::Handle<v8::Value> toV8(Counter* impl)
{
    if (!impl)
        return v8::Null();
    return V8Counter::wrap(impl);
}
inline v8::Handle<v8::Value> toV8(PassRefPtr< Counter > impl)
{
    return toV8(impl.get());
}
}

#endif // V8Counter_h
