#ifndef SIMPLETIME_H
#define SIMPLETIME_H
#include <string>
#include <iostream>



class SimpleTime
{
    public:
        //setters
        void setHour(int Hour);
        void setMinute(int Minute);
        void setSecond(int Second);
        void setZone(std::string Zone);


        //getters
        int getHour();
        int getMinute();
        int getSecond();
        std::string getZone();

        //default constructor
        SimpleTime();
        //overloaded constructor
        Simpletime(int Hour,int Minute,int Second,std::string Zone);


        //Functions
        void printCivilian();
        void printMilitary();
        void printZulu();
        bool checkTime(int, int, int);
        bool checkHour(int);
        bool checkMinute(int);
        bool checkSecond(int);






    private:
        int Hour;
        int Minute;
        int Second;
        std::string Zone;

};

#endif // SIMPLETIME_H
