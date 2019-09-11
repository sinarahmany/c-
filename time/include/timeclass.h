#ifndef TIMECLASS_H
#define TIMECLASS_H
#include <time.h>
#include <iostream>
using namespace std;
class timeclass
{
    public:
        int year,month,day=0;
        timeclass();
        timeclass(int year,int month ,int day);
        std::string printMonth(int month);
        std::string printWeekDay(int weekDay);
        std::string printDay(int day);




    protected:

    private:
};

#endif // TIME_H
