/*
 *  ofxEventDispatcher.cpp
 *  emptyExample
 *
 *  Created by Peter Uithoven on 4/20/11.
 */

#import "ofxEventDispatcher.h"


ofxEventDispatcher::ofxEventDispatcher()
{
	
}
ofxEventDispatcher::~ofxEventDispatcher()
{
	
}

void ofxEventDispatcher::addEventListener(ofxEventListener *listener)
{
	printf("ofxEventDispatcher::addEventListener\n");
	listeners.push_back(listener);
}
void ofxEventDispatcher::removeEventListener(ofxEventListener *listener)
{
	
}
void ofxEventDispatcher::dispatchEvent(ofxEvent * event)
{
	printf("ofxEventDispatcher::dispatchEvent\n");
	printf("listeners size: %i",listeners.size());
	for (int i = 0; i < listeners.size(); i++)
	{
		ofxEventListener * listener = listeners.at(i);
		listener->eventHandler(event);
	}
}
int ofxEventDispatcher::numListeners()
{
	return listeners.size();
}


