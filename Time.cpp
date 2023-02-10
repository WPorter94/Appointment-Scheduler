#include <iostream>
#include "Time.h"
#include<string>

Time::Time(int hour, int min, int sec)
{
	this->time_in_secs = hour * 60 * 60 + min *60 + sec ;
}

Time::Time()
{
	this->time_in_secs = 0;
}

int Time::get_hours() const
{
	return this->time_in_secs / 3600;
}
int Time::get_minutes() const
{
	return this->time_in_secs / 60 % 60 ;
}

int Time::get_seconds() const
{
	return this->time_in_secs % 60;
}

/**
   Computes the seconds between this time and another.
   @param t the other time
   @return the number of seconds between this time and t
*/
int Time::seconds_from(Time t) const
{
	return abs(this->time_in_secs - t.time_in_secs);
}
/**
   Adds a number of seconds to this time.
   @param s the number of seconds to add
*/
void Time::add_seconds(int s)
{
	time_in_secs = time_in_secs + s; 
	int secs_in_day = 3600 * 24;
	if (time_in_secs >= 0)
	{
		time_in_secs = time_in_secs % secs_in_day;
	}
	else
	{
		time_in_secs += secs_in_day;
	}
}