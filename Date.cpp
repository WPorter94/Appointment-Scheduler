#include "Date.h"
#include <string>


Date::Date()
{
	this->day = 1;
	this->month = 1;
	this->year = 1;
}
/* Constructs a date.
   @param y the year
   @param m the month
   @param d the day
 *
 */
Date::Date(int y, int m, int d)
{
	this->day = d;
	this->month = m;
	this->year = y;
}
/*
 * return the year
 */
int Date::get_year() const
{
	return this->year;
}
/*
 * return the month
 */
int Date::get_month() const
{
	return this->month;
}
/*
 * return the day
 */
int Date::get_day() const
{
	return this->day;
}
/*
 compare this date with other date
 */
bool Date::operator==(Date other) const
{
	return this->day == other.day && this->month == other.month && this->year == other.year;
}
