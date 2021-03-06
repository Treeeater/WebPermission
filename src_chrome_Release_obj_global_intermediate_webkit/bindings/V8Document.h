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

#ifndef V8Document_h
#define V8Document_h

#include "Document.h"
#include "V8DOMWrapper.h"
#include "V8Node.h"
#include "WrapperTypeInfo.h"
#include <wtf/text/StringHash.h>
#include <v8.h>
#include <wtf/HashMap.h>

namespace WebCore {

class V8Document {
public:
    static const bool hasDependentLifetime = V8Node::hasDependentLifetime;
    static bool HasInstance(v8::Handle<v8::Value> value);
    static v8::Persistent<v8::FunctionTemplate> GetRawTemplate();
    static v8::Persistent<v8::FunctionTemplate> GetTemplate();
    static Document* toNative(v8::Handle<v8::Object> object)
    {
        return reinterpret_cast<Document*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
    }
    inline static v8::Handle<v8::Object> wrap(Document*, bool forceNewObject = false);
    static void derefObject(void*);
    static WrapperTypeInfo info;
    static v8::Handle<v8::Value> evaluateCallback(const v8::Arguments&);
    static v8::Handle<v8::Value> getCSSCanvasContextCallback(const v8::Arguments&);
    static v8::Handle<v8::Value> createTouchListCallback(const v8::Arguments&);
    static v8::Handle<v8::Value> locationAccessorGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info);
    static void locationAccessorSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info);
    static const int internalFieldCount = v8DefaultWrapperInternalFieldCount + 0;
private:
    static v8::Handle<v8::Object> wrapSlow(Document*);
};


v8::Handle<v8::Object> V8Document::wrap(Document* impl, bool forceNewObject)
{
    if (!forceNewObject) {
        v8::Handle<v8::Object> wrapper = V8DOMWrapper::getWrapper(impl);
        if (!wrapper.IsEmpty())
            return wrapper;
    }
    return V8Document::wrapSlow(impl);
}

v8::Handle<v8::Value> toV8(Document*, bool forceNewObject = false);
inline v8::Handle<v8::Value> toV8(PassRefPtr< Document > impl, bool forceNewObject = false)
{
    return toV8(impl.get(), forceNewObject);
}
}

#endif // V8Document_h
