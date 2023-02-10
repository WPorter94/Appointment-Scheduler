#include <cstdlib>
#include"Appointment.h"
#include "Daily.h"
#include "Monthly.h"
#include "Onetime.h"
#include "Time.h"

using namespace std;

int main()
{
	vector<Appointment *> schedule;
	bool more = true;
	
	while (more)
	{
		string input;
		
		cout << "Daily Monthly Onetime Check Save Load Quit (d/m/o/c/s/l/q): ";
		cin >> input;
		cout << input <<endl;

		if (input == "d")
		{
			Daily* a = new Daily();
			a->read();
			schedule.push_back(a);
		}
		else if (input == "m")
		{
			Monthly* a = new Monthly();
			a->read();
			schedule.push_back(a);
		}
		else if (input == "o")
		{
			Onetime* a = new Onetime();
			a->read();
			schedule.push_back(a);
		}
		else if (input == "c")
		{
			cout << "Enter year month day: ";
			int tempY, tempM, tempD;
			cin >> tempY >> tempM >> tempD;
			cout << "You have these appointments: " << endl;
			for (int i = 0; i < schedule.size(); i++)
			{
				if (schedule.at(i)->occurs_on(tempY, tempM, tempD) == true)
				{
					schedule.at(i)->print();
					
				}

			}
			
		}
		else if (input == "s")
		{
			cout << "File name: ";
			string filename;
			cin >> filename;
			ofstream out(filename.c_str());
			for (int i = 0; i < schedule.size(); i++)
			{
				schedule.at(i)->save(out);
			}
			out.close();
		}
		else if (input == "l")
		{
			cout << "File name: ";
			string filename;
			cin >> filename;
			
			ifstream in(filename.c_str());
			for (int i = 0; !in.eof(); i++)
			{
				
				schedule.at(i)->load(in);
			}
			in.close();
		}
		else if (input == "q")
		{
			more = false;
		}

	}


}