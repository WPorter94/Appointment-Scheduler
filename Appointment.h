#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <string>
#include <iostream>
#include "Time.h"
using namespace std;
class Appointment
{
public:
 
    Appointment();

    Appointment(string desc, Time s, Time e);
  
    void print() const;
 
    void read();
 
    virtual void save(std::ostream& out) const;
 
    virtual void load(std::istream& in);

    virtual bool occurs_on(int year, int month, int day) const = 0;
    /**
     * virtual destructor
     */
    virtual ~Appointment(){}

    void setEnd(Time end);
    Time getEnd() const;
    void setStart(Time start);
    Time getStart() const;
    void setDescription(string description);
    string getDescrtiption() const;
protected:
    std::string description;  // appointment description
    Time start;  // start time appointment
    Time end;    // end time appointment
};


#endif /* APPOINTMENT_H */

#pragma once
