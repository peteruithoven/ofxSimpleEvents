/*
 *  ofxEvent.h
 *  emptyExample
 *
 *  Created by Peter Uithoven on 4/20/11.
 */

#ifndef _ofxEvent
#define _ofxEvent

#include "ofMain.h"
#include "ofxSimpleEvents.h"

#define BASIC_EVENT "BasicEvent"


//#include <ofAddons.h>
//#include <vector>

using namespace std;

class ofxEvent
{
	public:
		string type;
		ofxEvent();
};

#endif
