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

#if ENABLE(WORKERS)

#ifndef V8Worker_h
#define V8Worker_h

#include "V8DOMWrapper.h"
#include "Worker.h"
#include "WrapperTypeInfo.h"
#include <wtf/text/StringHash.h>
#include <v8.h>
#include <wtf/HashMap.h>

namespace WebCore {

class V8Worker {
public:
    static const bool hasDependentLifetime = true;
    static bool HasInstance(v8::Handle<v8::Value> value);
    static v8::Persistent<v8::FunctionTemplate> GetRawTemplate();
    static v8::Persistent<v8::FunctionTemplate> GetTemplate();
    static Worker* toNative(v8::Handle<v8::Object> object)
    {
        return reinterpret_cast<Worker*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
    }
    inline static v8::Handle<v8::Object> wrap(Worker*);
    static void derefObject(void*);
    static WrapperTypeInfo info;
    static ActiveDOMObject* toActiveDOMObject(v8::Handle<v8::Object>);
    static v8::Handle<v8::Value> postMessageCallback(const v8::Arguments&);
    static v8::Handle<v8::Value> webkitPostMessageCallback(const v8::Arguments&);
    static v8::Handle<v8::Value> constructorCallback(const v8::Arguments& args);
    static const int eventListenerCacheIndex = v8DefaultWrapperInternalFieldCount + 0;
    static const int internalFieldCount = v8DefaultWrapperInternalFieldCount + 1;
private:
    static v8::Handle<v8::Object> wrapSlow(Worker*);
};


v8::Handle<v8::Object> V8Worker::wrap(Worker* impl)
{
        v8::Handle<v8::Object> wrapper = getActiveDOMObjectMap().get(impl);
        if (!wrapper.IsEmpty())
            return wrapper;
    return V8Worker::wrapSlow(impl);
}

inline v8::Handle<v8::Value> toV8(Worker* impl)
{
    if (!impl)
        return v8::Null();
    return V8Worker::wrap(impl);
}
inline v8::Handle<v8::Value> toV8(PassRefPtr< Worker > impl)
{
    return toV8(impl.get());
}
}

#endif // V8Worker_h
#endif // ENABLE(WORKERS)

