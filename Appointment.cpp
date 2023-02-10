
#include <iostream>
#include "Appointment.h"
#include <string>
#include "Time.h"
using namespace std;

Appointment::Appointment()
{

}

Appointment::Appointment(string desc, Time s, Time e)
{
	this->description = desc;
	this->start = s;
	this->end = e;
}
void Appointment::print() const
{
	cout << start.get_hours() << ":";
	if (start.get_minutes() < 10)
	{
		cout << 0;
	}
	cout << start.get_minutes() << " - ";
	cout << end.get_hours() << ":";
	if (end.get_minutes() < 10)
	{
		cout << 0;
	}
	cout << end.get_minutes() << " " << this->description << endl;
	
	
}
void Appointment::read()
{
	string description;
	cout << "Enter start_hours start_mins end_hours end_mins descript:" << endl;
	int sh;
	int sm;
	int eh;
	int em;
	cin >> sh >> sm >> eh >> em;
	getline(cin,description);
	
	this->description = description;
	start = Time(sh, sm, 0);
	end = Time(eh, em, 0);
}
void Appointment::save(ostream& out) const
{
	out << start.get_hours() << " ";
	out << start.get_minutes() << " ";
	out << end.get_hours() << " ";
	out << end.get_minutes() << " " << this->description << endl;
}
void Appointment::load(istream& in)
{
	int sh, sm, eh, em;
	in >> sh >> sm >> eh >> em;
	getline(in, description);
	this->start = Time(sh, sm, 0);
	this->end = Time(eh, em, 0);
}
/**
Determines if the appointment occurs on the given date.
@param year a year value
@param month a month value of 1 for Jan, to 12 for Dec
@param day a day value
@return true if the appointment occurs on the given date
*/

/**
 * virtual destructor
 */

void Appointment::setEnd(Time end)
{
	this->end = end;
}
Time Appointment::getEnd() const
{
	return this->end;
}
void Appointment::setStart(Time start)
{
	this->start = start;
}
Time Appointment::getStart() const
{
	return this->start;
}
void Appointment::setDescription(string description)
{
	this->description = description;
}
string Appointment::getDescrtiption() const
{
	return this->description;
}