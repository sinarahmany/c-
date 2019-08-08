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
SinaIsOnDate("AM", 0,0,0){

}
//overloaded constructor
SinaIsOnDate:: SinaIsOnDate(int Years, int Month, std::string day)
: SinaIsOnDate(day,Years,Month,0){

}

SinaIsOnDate::SinaIsOnDate(std::string day, int hour, int Month, int second){

    //check and convert the day to upper case
    std::locale loc;
    std::string temp;
    for (std::string::size_type i=0; i<day.length(); ++i)
        temp += std::toupper(day[i],loc);

    if(temp == "AM" || temp == "PM"){
        this->day = temp;
    } else{
        this->day = "AM";
    }

    if(second >=0 && second <60){
        this->second = second;
    } else{
        this->second = 0;
    }


    if(Month >=1 && Month <12){
        this->Month = Month;
    } else{
        this->Month = 1;
    }

    if(Years >=0 && Years <= 2019){
        this->Years = Years;
    }else {
        this->Years = 0;
    }

}
void SinaIsOnDate::whatTimeIsIt(){
    //08            07               01                AM
    std::string formattedYears;
    std::string formattedMonth;
    std::string formattedSecond;

    formattedYears = std::to_string(Years);
    formattedMonth = std::to_string(Month);
    formattedSecond = std::to_string(second);


    if(Years < 10){
        formattedYears = "0" + std::to_string(Years);
    }

    if(Month < 10){
        formattedMonth = "0" + std::to_string(Month);
    }

    if(second < 10){
        formattedSecond = "0" + std::to_string(second);
    }

    std::cout << formattedYears << "Years ," << formattedMonth << "Months ," << formattedSecond << " " << day << std::endl;

}
