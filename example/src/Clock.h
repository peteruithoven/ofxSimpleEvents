/*
 *  Clock.h
 *  emptyExample
 *
 *  Created by Peter Uithoven on 4/20/11.
 */

#ifndef _Clock
#define _Clock

#include "ofMain.h"
#include "ofxEventDispatcher.h"
#include "TimeEvent.h"

class Clock : public ofxEventDispatcher
{
	public:
		int counter;
		int time;
		Clock();
		void update();
};

#endif
