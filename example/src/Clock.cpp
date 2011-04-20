/*
 *  Clock.cpp
 *  emptyExample
 *
 *  Created by Peter Uithoven on 4/20/11.
 */

#import "Clock.h"

Clock::Clock()
{
	printf("Clock::Clock\n");
	counter = 0;
	time = 0;
}
void Clock::update()
{
	//printf("Clock::update\n");
	counter++;
	if(counter > 10)
	{
		time++;
		if(time > 10)
			time = 0;
		
		TimeEvent * event = new TimeEvent();
		event->time = time;
		dispatchEvent(event);
		
		counter = 0;
	}
}