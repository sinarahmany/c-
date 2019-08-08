#ifndef SINAISONDATE_H
#define SINAISONDATE_H
#include <stdio.h>
#include <iostream>
#include <string>


class SinaIsOnDate
{
    private:
        std::string day; // AM or PM
        int second;
        int Month;
        int Years;
    public:
        std::string getDay();
        void setDay(std::string day);

        int getSecond();
        void setSecond(int second);

        int geMonth();
        void setMonth(int Month);

        int getYears();
        void setYears(int Years);
        //default constructor
        SinaIsOnDate();
        //overloaded constructor
        SinaIsOnDate(std::string day, int Years, int Month, int second);
        //default parameter for day is "AM"
        //if you instantiate your object with 2 parameters day will be automatically "AM"
        //if you instantiate your object with 3 parameters day will be assigned whatever the value is "AM" or "PM"
        SinaIsOnDate(int Years, int Month, std::string day = "AM");

       // ~SinaIsOnDate();

    void whatTimeIsIt();
};

#endif // SINAISONDATE_H
