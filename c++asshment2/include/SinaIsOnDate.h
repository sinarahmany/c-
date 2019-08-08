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
        int getDay();
        void setDay(int day);

        int geMonth();
        void setMonth(int Month);

        int getYears();
        void setYears(int Years);
        //default constructor
        SinaIsOnDate();
        //overloaded constructor
        //SinaIsOnDate(int day, int Years, int Month);

        SinaIsOnDate(int Years, int Month, int day );

       // ~SinaIsOnDate();

        void whatTimeIsIt();
};

#endif // SINAISONDATE_H
