#include "SinaIsOnDate.h"

int SinaIsOnDate::getDay(){
    return day;
}
void SinaIsOnDate::setDay(int day){
    this->day = day;
}

int SinaIsOnDate::geMonth(){
    return Month;
}

void SinaIsOnDate::setMonth(int Month){
    this->Month = Month;
}

int SinaIsOnDate::getYears(){
    return Years;
}

void SinaIsOnDate::setYears(int Years){
    this->Years = Years;
}
//default constructor
SinaIsOnDate::SinaIsOnDate() :
SinaIsOnDate(0, 0,0){

}
//overloaded constructor
SinaIsOnDate:: SinaIsOnDate(int Years, int Month, int day)
{
    //check and convert the day to upper case
    if(day >=1 && day <= 30){
        this->day = day;
    }else {
        this->day = 1;
    }


    if(Month >=1 && Month <12){
        this->Month = Month;
    } else{
        this->Month = 1;
    }

    if(Years >=1 && Years <= 2019){
        this->Years = Years;
    }else {
        this->Years = 1;
    }
}

void SinaIsOnDate::whatTimeIsIt(){

    std::string formattedYears;
    std::string formattedMonth;
    std::string formattedDay;


    formattedYears = std::to_string(Years);
    formattedMonth = std::to_string(Month);
    formattedDay = std::to_string(day);


    if(Years < 10){
        formattedYears = "0" + std::to_string(Years);
    }

    if(Month < 10){
        formattedMonth = "0" + std::to_string(Month);
    }


    std::cout << formattedYears << "/" << formattedMonth << "/" << formattedDay << std::endl;

}

