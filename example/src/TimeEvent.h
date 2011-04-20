/*
 *  TimeEvent.h
 *  emptyExample
 *
 *  Created by Peter Uithoven on 4/20/11.
 */

#ifndef _TimeEvent
#define _TimeEvent

#include "ofMain.h"
#include "ofxEvent.h"

#define TIME_EVENT "Time"

class TimeEvent : public ofxEvent
{
	public:
		TimeEvent();
		int time;
};

#endif
