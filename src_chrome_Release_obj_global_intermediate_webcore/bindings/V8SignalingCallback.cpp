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
#include "V8SignalingCallback.h"

#if ENABLE(MEDIA_STREAM)

#include "ScriptExecutionContext.h"
#include "V8Binding.h"
#include "V8CustomVoidCallback.h"
#include "V8PeerConnection.h"
#include "V8Proxy.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

#include <wtf/Assertions.h>

namespace WebCore {

V8SignalingCallback::V8SignalingCallback(v8::Local<v8::Object> callback, ScriptExecutionContext* context)
    : ActiveDOMCallback(context)
    , m_callback(v8::Persistent<v8::Object>::New(callback))
    , m_worldContext(UseCurrentWorld)
{
}

V8SignalingCallback::~V8SignalingCallback()
{
    m_callback.Dispose();
}

// Functions

bool V8SignalingCallback::handleEvent(const String& message, PeerConnection* source)
{
    if (!canInvokeCallback())
        return true;

    v8::HandleScope handleScope;

    v8::Handle<v8::Context> v8Context = toV8Context(scriptExecutionContext(), m_worldContext);
    if (v8Context.IsEmpty())
        return true;

    v8::Context::Scope scope(v8Context);

    v8::Handle<v8::Value> messageHandle = v8String(message);
    if (messageHandle.IsEmpty()) {
        CRASH();
        return true;
    }
    v8::Handle<v8::Value> sourceHandle = toV8(source);
    if (sourceHandle.IsEmpty()) {
        CRASH();
        return true;
    }

    v8::Handle<v8::Value> argv[] = {
        messageHandle,
        sourceHandle
    };

    bool callbackReturnValue = false;
    return !invokeCallback(m_callback, 2, argv, callbackReturnValue, scriptExecutionContext());
}

} // namespace WebCore

#endif // ENABLE(MEDIA_STREAM)
