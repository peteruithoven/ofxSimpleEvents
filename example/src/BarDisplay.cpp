/*
 *  BarDisplay.cpp
 *  emptyExample
 *
 *  Created by Peter Uithoven on 4/20/11.
 */

#import "BarDisplay.h"


BarDisplay::BarDisplay()
{
	count = 0;
}
void BarDisplay::eventHandler(ofxEvent * event)
{
	TimeEvent * timeEvent = (TimeEvent*)event;
	count = timeEvent->time;
}
void BarDisplay::draw()
{
	ofFill();
	ofSetColor(220, 220, 220);
	
	ofRect(20, 40, count*5, 20);
}