#include "SimpleDate.h"
#include <string>
#include <iostream>

int SimpleDate::getDay(){
    return Day;
}
void SimpleDate::setDay(int Day){
    this->Day = Day;
}

int SimpleDate::getMonth(){
    return Month;
}
void SimpleDate::setMonth(int Month){
    this->Month = Month;
}

int SimpleDate::getYear(){
    return Year;
}
void SimpleDate::setYear(int Year){
    this->Year = Year;
}
std::string SimpleDate::getDayOfWeek(){
    return DayOfWeek;
}
void SimpleDate::setDayOfWeek(std::string DayOfWeek){
    this->DayOfWeek = DayOfWeek;
}
