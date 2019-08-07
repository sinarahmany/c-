#include "SinaIsOnDate.h"

std::string SinaIsOnDate::getDay(){
    return day;
}
void SinaIsOnDate::setDay(std::string day){
    this->day = day;
}

int SinaIsOnDate::getSecond(){
    return second;
}

void SinaIsOnDate::setSecond(int second){
    this->second = second;
}

int SinaIsOnDate::geMinute(){
    return minute;
}

void SinaIsOnDate::setMinute(int minute){
    this->minute = minute;
}

int SinaIsOnDate::getHour(){
    return hour;
}

void SinaIsOnDate::setHour(int hour){
    this->hour = hour;
}
