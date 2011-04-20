/*
 *  CounterDisplay.h
 *  emptyExample
 *
 *  Created by Peter Uithoven on 4/20/11.
 */

#ifndef _CounterDisplay
#define _CounterDisplay

#include "ofMain.h"
#include "ofxEventListener.h"
#include "TimeEvent.h"

class CounterDisplay : public ofxEventListener
{
	public:
		int count;
		CounterDisplay();
		void eventHandler(ofxEvent * event);
		void draw();
};

#endif
