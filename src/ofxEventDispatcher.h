/*
 *  ofxEventDispatcher.h
 *  emptyExample
 *
 *  Created by Peter Uithoven on 4/20/11.
 */

#ifndef _ofxEventDispatcher
#define _ofxEventDispatcher

#include "ofMain.h"
#include "ofxEvent.h"
#include "ofxEventListener.h"

class ofxEventDispatcher
{
	private:
		vector<ofxEventListener*> listeners;
	
	public:
		ofxEventDispatcher();
		~ofxEventDispatcher();
		void addEventListener(ofxEventListener *listener);
		void removeEventListener(ofxEventListener *listener);
		void dispatchEvent(ofxEvent * event);
		int numListeners();
};

#endif
