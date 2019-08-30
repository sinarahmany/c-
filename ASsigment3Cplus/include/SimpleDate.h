#ifndef SIMPLEDATE_H
#define SIMPLEDATE_H
#include <string>
#include <iostream>


class SimpleDate
{
    private:

        int day;
        int month;
        int year;
        std::string dayofweek;

        bool checkDate(int, int, int);
        bool checkDay(int);
        bool checkMonth(int);
        bool checkYear(int);

    public:
        SimpleDate();
        SimpleDate(int, int, int, std::string);
        SimpleDate(const SimpleDate *);
        ~SimpleDate();

        void setDate(int, int, int, std::string);

        int getDay();
        void setDay(int);
        int getMonth();
        void setMonth(int);
        int getYear();
        void setYear(int);
        std::string getDOW();
        void setDOW(std::string);

        void print();
        std::string strMonth();
        std::string strDay();
        std::string strYear();




};

#endif // SIMPLEDATE_H
