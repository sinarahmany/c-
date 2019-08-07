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
        int minute;
        int hour;
    public:
        std::string getDay();
        void setDay(std::string day);

        int getSecond();
        void setSecond(int second);

        int geMinute();
        void setMinute(int minute);

        int getHour();
        void setHour(int hour);
};

#endif // SINAISONDATE_H
