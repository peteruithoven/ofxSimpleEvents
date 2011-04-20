/*
 *  ofxEventListener.h
 *  emptyExample
 *
 *  Created by Peter Uithoven on 4/20/11.
 */

#ifndef _ofxEventListener
#define _ofxEventListener

#include "ofMain.h"
#include "ofxEvent.h"
#include "ofxEventListener.h"

class ofxEventListener
{
	public:
		ofxEventListener();
		virtual void eventHandler(ofxEvent * event);
};

#endif
