/*
 * Copyright (C) 2007-2009 Google Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *     * Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 * copyright notice, this list of conditions and the following disclaimer
 * in the documentation and/or other materials provided with the
 * distribution.
 *     * Neither the name of Google Inc. nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "config.h"
#include "V8Element.h"

#include "Attr.h"
#include "Document.h"
#include "Element.h"
#include "ExceptionCode.h"
#include "HTMLFrameElementBase.h"
#include "HTMLNames.h"
#include "Node.h"

#include "V8Attr.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8HTMLElement.h"
#include "V8Proxy.h"
#include "V8IsolatedContext.h"

#if ENABLE(SVG)
#include "V8SVGElement.h"
#endif

#include <wtf/RefPtr.h>

namespace WebCore {

v8::Handle<v8::Value> toV8(Element* impl, bool forceNewObject)
{
    if (!impl)
        return v8::Null();

	/* document.getElementByTagsName, all other index accesses go here.
	mediate to record the xpath of the accessed node and accessor*/
	//'origin' is the current thirdPartyId.
	String origin = V8IsolatedContext::getThirdPartyId();
	if ((origin != "")&&(origin != 0))
	{
		//This is from a thirdParty script, we want to record it.
		String nodeInfo = "";
		Node* currentNode = impl;
		char buff[5];			//assume the index of a node cannot exceed 10000
		while (currentNode!=0)
		{
			nodeInfo.append(currentNode->nodeName());
			int index = -1;		//initalize to -1 to start the index from 0
			Node *indexNode = currentNode;
			while (indexNode!=0)
			{
				if (!indexNode->isTextNode()) index ++;
				indexNode = indexNode->previousSibling();
			}
			if (index>9999) index = 9999;	//assume the index of a node cannot exceed 10000
			nodeInfo.append("[");
			itoa(index,buff,10);
			nodeInfo.append(buff);
			nodeInfo.append("]/");
			currentNode = currentNode->parentNode();
		}
		nodeInfo.append(" is accesed by ");
		nodeInfo.append(origin);
		//write the log to disk.
		impl->document()->writeThirdPartyLog(nodeInfo);
	}

    if (impl->isHTMLElement())
        return toV8(toHTMLElement(impl), forceNewObject);
#if ENABLE(SVG)
    if (impl->isSVGElement())
        return toV8(static_cast<SVGElement*>(impl), forceNewObject);
#endif
    return V8Element::wrap(impl, forceNewObject);
}
} // namespace WebCore
