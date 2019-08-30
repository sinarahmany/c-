#ifndef SIMPLETIME_H
#define SIMPLETIME_H
#include <string>
#include <iostream>



class SimpleTime
{
    public:
        SimpleTime();
        SimpleTime(int,int,int, std::string);
        SimpleTime(SimpleTime *);
        ~SimpleTime();
        //getters setters
        void setTime(int,int,int, std::string);
        void setHour(int);
        int getHour();
        void setMinute(int);
        int getMinute();
        void setSecond(int);
        int getSecond();
        void setZone(std::string);
        std::string getZone();
        void printCivilian();
        void printMilitary();
        void printZulu();
        //functions for hour minute and second
        std::string strHour();
        std::string strMinute();
        std::string strSecond();



    private:
        int hour;
        int minute;
        int second;
        std::string zone;
         bool checkTime(int, int, int);
        bool checkHour(int);
        bool checkMinute(int);
        bool checkSecond(int);


};
#endif // SIMPLETIME_H
