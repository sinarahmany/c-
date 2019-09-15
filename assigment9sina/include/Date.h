#ifndef Time_h
#define Time_h

#include <stdio.h>
#include <iostream>
#include <string>

class Date{

private:

    int Day;
    int month;
    int year;

public:

    int getDay();
    void setDay(int Day);

    int getMonth();
    void setMonth(int month);

    int getYear();
    void setYear(int year);

    //default constructor
    Date();
    //overloaded constructor
    Date(int Day , int month , int year);
    //copy constructor
    Date(Date const &obj);
    //destructor
    ~Date();

    void whatDateIsIt();
    void calculateAge();
};
#endif /* Date_h */
