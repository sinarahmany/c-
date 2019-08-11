#ifndef SIMPLEDATE_H
#define SIMPLEDATE_H
#include <string>
#include <iostream>


class SimpleDate
{
    private:

        int Day;
        int Month;
        int Year;
        std::string DayOfWeek;

    public:
        //setters
        void setDay(int Day);
        void setMonth(int Month);
        void setYear(int Year);
        void setDayOfWeek(std::string DayOfWeek);


        //getters
        int getDay();
        int getMonth();
        int getYear();
        std::string getDayOfWeek();
        //default constructor
        SimpleDate();
        //overloaded constructor
        SimpleDate(int Day,int Month,int Year,std::string DayOfWeek);
        void print();
        bool checkDate(int, int, int);





};

#endif // SIMPLEDATE_H
