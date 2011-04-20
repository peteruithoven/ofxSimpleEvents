/*
 *  CounterDisplay.cpp
 *  emptyExample
 *
 *  Created by Peter Uithoven on 4/20/11.
 */

#import "CounterDisplay.h"


CounterDisplay::CounterDisplay()
{
	
}

void CounterDisplay::eventHandler(ofxEvent * event)
{
	TimeEvent * timeEvent = (TimeEvent*)event;
	count = timeEvent->time;
}

void CounterDisplay::draw()
{
	ofSetColor(220, 220, 220);
	int x = 20;
	int y = 20;
	
	string displayStr = "";
	displayStr += "Time: " + ofToString(count) + "\n";
	
	ofDrawBitmapString(displayStr,x,y);
}