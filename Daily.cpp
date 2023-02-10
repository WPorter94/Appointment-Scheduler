
#include "Daily.h"
#include <iostream>
#include "Daily.h"
using namespace std;

Daily::Daily()
{

}
Daily::Daily(string desc, Time s, Time e) 
	:Appointment(desc, s, e)
{
	
}
void Daily::save(ostream& out) const 
{

	out << "Daily" << endl;
	out << start.get_hours() << " ";
	out << start.get_minutes() << " ";
	out << end.get_hours() << " ";
	out << end.get_minutes() << " " << this->description << endl;
}
bool Daily::occurs_on(int year, int month, int day) const
{
	if (day != 0)
	{
		return true;
	}
}