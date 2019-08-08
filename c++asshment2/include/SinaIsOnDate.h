#ifndef SINAISONDATE_H
#define SINAISONDATE_H
#include <stdio.h>
#include <iostream>
#include <string>


class SinaIsOnDate
{
    private:
        int day;
        int Month;
        int Years;
    public:
        //declaring getters and setters
        int getDay();
        void setDay(int day);

        int geMonth();
        void setMonth(int Month);

        int getYears();
        void setYears(int Years);
        //default constructor
        SinaIsOnDate();

        //overloaded constructor
        SinaIsOnDate(int Years, int Month, int day );

        //copy constractor
        SinaIsOnDate(const SinaIsOnDate &obj);
        //Destructor
       // ~SinaIsOnDate();
        //so creative with making name for functions!!
        void whatTimeIsIt();
        void whatTimeWasIt();
        void whatTimeWillIt();
};

#endif // SINAISONDATE_H
