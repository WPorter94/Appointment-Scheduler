#include "Onetime.h"
#include <string>
#include "Date.h"
using namespace std;

Onetime::Onetime()
{

}
/* Constructs a Onetime appointment.
   @param desc the description of a daily appointment
   @param d the date of the appointment
   @param s the start time of the appointment
   @param e the end time of the appointment
 *
 */
Onetime::Onetime(std::string desc, Date d, Time s, Time e)
	:Appointment(desc, s, e)
{
	this->when = d;
}
/*
 read in the appointment in the following format
 * Enter start_hours start_mins end_hours end_mins descript:
 * 5 0 6 0 dentist
 * Enter date:
 * 2018 5 10
 */
void Onetime::read()
{
	int y, m, d;
	Appointment::read();
	cout << "Enter year month day: ";
	cin >> y >> m >> d;
	this->when = Date(y, m, d);
}
/*
 * save the monthly appointment with a header
 * appointment type
 * date
 * start_hours start_mins end_hours end_mins descript; for example:
 *
 * Onetime
 * 2018 5 10
 * 5 0 6 0 dentist
 */
void Onetime::save(std::ostream& out) const
{
	
	out << "Onetime" << endl;
	out << when.get_year() << " " << when.get_month() << " "<< when.get_year() <<  endl;
	Appointment::save(out);

}
/*
 * load the monthly appointment with a header
 * appointment type
 * date
 * start_hours start_mins end_hours end_mins descript; for example:
 */
void Onetime::load(std::istream& in)
{

	int tempY, tempM, tempD;
	string tempType;
	string tempdescription;
	getline(in,tempType);
	in >> tempY >> tempM >> tempD;
	int sh, sm, eh, em;
	in >> sh >> sm >> eh >> em;
	getline(in, tempdescription);
	this->start = Time(sh, sm, 0);
	this->end = Time(eh, em, 0);
	this->description = tempdescription;
	
}
/**
Determines if the appointment occurs on the given date.
@param year a year value
@param month a month value of 1 for Jan, to 12 for Dec
@param day a day value
@return true if the appointment occurs on the given date
*/
bool Onetime::occurs_on(int year, int month, int day) const
{
	if (when.get_day() == day && when.get_month() == month && when.get_year() == year)
	{
		return true;
	}
	else if (when.get_day() != day && when.get_month() != month && when.get_year() != year)
	{
		return false;
	}
}