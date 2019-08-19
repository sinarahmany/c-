#ifndef SinaIsOnDate_H
#define SinaIsOnDate_H
#include <stdio.h>
#include <iostream>
#include <string>
#include <windows.h>

void strDate(std::string, int);
class SinaIsOnDate{
    private:
        // defining day month and year
        int day;//second;
        int month;//minute;
        int year;//hour;

    public:
        // getters and setters
        int getDay();
        void setDay(int day);

        int getMonth();
        void setMonth(int month);

        int getYear();
        void setYear(int year);

        // default constructor
        SinaIsOnDate();

        //  overloaded constructor
        SinaIsOnDate(int day, int month, int year);

        //  constructor to copy
        SinaIsOnDate(const SinaIsOnDate &obj);

        //  Destructor
        ~SinaIsOnDate();

        // utility function to  check Day
        std::string checkSinaDay(int);

        // utility function to check month
        std::string checkSinaMonth(int);

        // utility function to check year
        std::string checkSinaYear(int);

        // utility function for printing the date
        void printSinaDate();
    };

#endif //

