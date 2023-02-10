#include "Monthly.h"
#include <string>

using namespace std;


Monthly::Monthly()
{
	this->day = 1;
}
/* Constructs a month appointment.
   @param desc the description of a daily appointment
   @param d the day of the appointment
   @param s the start time of the appointment
   @param e the end time of the appointment
 *
 */
Monthly::Monthly(string desc, int d, Time s, Time e)
	:Appointment(desc,s,e)
{
	this->day = d;
}
/*
 read in the appointment in the following format
 * Enter start_hours start_mins end_hours end_mins descript:
 * 5 0 6 0 dentist
 * Enter day:
 * 5
 */
void Monthly::read()
{
	Appointment::read();
	cout << "Enter day: ";
	int tempday;
	cin >> tempday;
	day = tempday;
}
/*
* save the monthly appointment with a header
* appointment type
* day
* start_hours start_mins end_hours end_mins descript; for example:
*
* Monthly
* 5
* 5 0 6 0 dentist
*/
void Monthly::save(ostream& out) const
{
	
	out << "Monthly" << endl;
	out << this->day << endl;
	Appointment::save(out);
}
/*
* load the monthly appointment with a header
* appointment type
* day
* start_hours start_mins end_hours end_mins descript; for example:
*/
void Monthly::load(istream& in)
{
	string tempDescription;
	string tempType;
	getline(in, tempType);
	in >> tempType;
	in >> this->day;
	int sh, sm, eh, em;
	in >> sh >> sm >> eh >> em;
	this->start = Time(sh, sm, 0);
	this->end = Time(eh, em, 0);
	this->description = tempDescription;

}
/**
Determines if the appointment occurs on the given day.
@param year a year value
@param month a month value of 1 for Jan, to 12 for Dec
@param day a day value
@return true if the appointment occurs on the given day
*/
bool Monthly::occurs_on(int year, int month, int day) const
{
	if (this->day == day)
	{
		return true;
	}
	if (this->day != day)
	{
		return false;
	}
}