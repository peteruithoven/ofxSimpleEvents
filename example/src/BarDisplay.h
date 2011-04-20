/*
 *  BarDisplay.h
 *  emptyExample
 *
 *  Created by Peter Uithoven on 4/20/11.
 */

#ifndef _BarDisplay
#define _BarDisplay

#include "ofMain.h"
#include "ofxEventListener.h"
#include "TimeEvent.h"

class BarDisplay : public ofxEventListener
{
	public:
		int count;
		BarDisplay();
		void eventHandler(ofxEvent * event);
		void draw();
};

#endif
