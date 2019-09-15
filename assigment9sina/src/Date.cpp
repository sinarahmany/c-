#include "Date.h"
#include <string>
#include <time.h>
#include <stdexcept>


int Date::getDay(){
    return Day;
}

void Date::setDay(int Day){
    this->Day = Day;
}

int Date::getMonth(){
    return month;
}

void Date::setMonth(int month){
    this->month = month;
}

int Date::getYear(){
    return year;
}

void Date::setYear(int year){
    this->year = year;
}

//default constructor
Date::Date():
Date(0,0,0){

}
//overloaded constructor
Date::Date(int Day, int month, int year){

    if(Day > 0 && Day <= 31){
        this->Day = Day;
    } else{
        throw std::invalid_argument("Day can not be more 1 less than 31");

    }

    if(month == 1 || month == 3 ||month == 5 ||month == 7 ||month == 8 ||month == 10 ||month == 12 ){
        if(Day > 0 && Day <= 31){
            this->Day = Day;
        } else{
            throw std::invalid_argument("this month has 31days,so day must be between 1 and 31");
        }
    }
    if(month == 4 || month == 6 ||month == 9 ||month == 11 ){
        if(Day > 0 && Day <= 30){
            this->Day = Day;
        } else{
            throw std::invalid_argument("this month has 30days,so day must be between 1 and 30");
        }
    }
    if(month == 2){
        if (year % 4 == 0)
        {
            if (year % 100 == 0)
            {
                if (year % 400 == 0){

                    if(Day > 0 && Day <= 29){
                        this->Day = Day;
                    }else{
                        throw std::invalid_argument("leap years have 29days in february,so day must be between 1 and 29");
                    }
                }else{
                        if(Day > 0 && Day <= 28){
                            this->Day = Day;
                        } else{
                            throw std::invalid_argument("regular years have 28days in february,so day must be between 1 and 28");
                        }
            }
            }else{
                if(Day > 0 && Day <= 29){
                    this->Day = Day;
                }else{
                    throw std::invalid_argument("leap years have 29days in february,so day must be between 1 and 29");
                }
            }
        }else{
            if(Day > 0 && Day <= 28){
                this->Day = Day;
            } else{
                throw std::invalid_argument("regular years have 28days in february,so day must be between 1 and 28");
            }
                }
    }
    if(month > 0 && month <= 12){
        this->month = month;
    } else{
        throw std::invalid_argument("month can not be more 12 or less than 1");
    }
    if(year >=0 && year <= 2019){
        this->year = year;
    }else {
        throw std::invalid_argument("the year you entered is more than 2019 or less than 1");
    }

}

//copy constructor
Date::Date(Date const &obj){
    this->Day = obj.Day;
    this->month = obj.month;
    this->year = obj.year;
}

//destructor
Date::~Date(){

}
void Date::whatDateIsIt(){
    std::string formattedDay;
    std::string formattedMonth;
    std::string formattedYear;


    formattedDay = std::to_string(Day);
    formattedMonth = std::to_string(month);
    formattedYear = std::to_string(year);


    // if the day is 9 formattedDay will be 09
    if(Day < 10){
        formattedDay = "0" + std::to_string(Day);
    }
    if(month == 0){
        formattedMonth = "0" + std::to_string(month);
    }
    //Jan,Feb,Mar,Apr,May...
    if(month == 1){
        formattedMonth = "Jan";
    }
    if(month == 2){
        formattedMonth = "Feb";
    }
    if(month == 3){
        formattedMonth = "Mar";
    }
    if(month == 4){
        formattedMonth = "Apr";
    }
    if(month == 5){
        formattedMonth = "May";
    }
    if(month == 6){
        formattedMonth = "Jun";
    }
    if(month == 7){
        formattedMonth = "Jul";
    }
    if(month == 8){
        formattedMonth = "Aug";
    }
    if(month == 9){
        formattedMonth = "Sep";
    }
    if(month == 10){
        formattedMonth = "Oct";
    }
    if(month == 11){
        formattedMonth = "Nov";
    }
    if(month == 12){
        formattedMonth = "Dec";
    }
    if(year < 10){
        formattedYear = "0" + std::to_string(year);
    }
    std::cout << formattedDay << "/" << formattedMonth << "/" << formattedYear << std::endl;
}


void Date::calculateAge(){

    time_t rawtime;
    struct tm * timeinfo;
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );


    int dYear = (timeinfo->tm_year+1900)-year;
    int dMonth = (timeinfo->tm_mon+1)-month;
    int dDay = (timeinfo->tm_mday)-Day;




    if(timeinfo->tm_mon < month){
        dYear = dYear -1;
        dMonth = 12 + dMonth;
    }

    if(month == 1 || month == 3 ||month == 5 ||month == 7 ||month == 8 ||month == 10 ||month == 12 ){

        if(timeinfo->tm_mon+1 == month){
            if(timeinfo->tm_mday < Day){
            dMonth = dMonth -1;
            dDay = 31 + dDay;
            }else{
                    dMonth = dMonth -12;
                    dYear = dYear +1;
                }

        }else{
            if(timeinfo->tm_mday < Day){
                dMonth = dMonth -1;
                dDay = 31 + dDay;
            }

        }

    }
    if(month == 4 || month == 6 ||month == 9 ||month == 11 ){
        if(timeinfo->tm_mon+1 == month){
            if(timeinfo->tm_mday < Day){
                dMonth = dMonth -1;
                dDay = 30 + dDay;
            }else{
                dMonth = dMonth -12;
                dYear = dYear +1;
            }
        }else{
            if(timeinfo->tm_mday < Day){
                dMonth = dMonth -1;
                dDay = 30 + dDay;
            }
        }
    }
    if(month == 2){
        if (year % 4 == 0)
        {
            if (year % 100 == 0)
            {
                if (year % 400 == 0){

                    if(timeinfo->tm_mon+1 == month){
                        if(timeinfo->tm_mday < Day){
                            dMonth = dMonth -1;
                            dDay = 29 + dDay;
                        }else{
                            dMonth = dMonth -12;
                            dYear = dYear +1;
                        }
                    }else{
                        if(timeinfo->tm_mday < Day){
                            dMonth = dMonth -1;
                            dDay = 29 + dDay;
                        }
                    }
                }else{
                    if(timeinfo->tm_mon+1 == month){
                        if(timeinfo->tm_mday < Day){
                            dMonth = dMonth -1;
                            dDay = 28 + dDay;
                        }
                    }else{
                        if(timeinfo->tm_mday < Day){
                            dMonth = dMonth -1;
                            dDay = 28 + dDay;
                        }
                    }
                }
            }else{
                if(timeinfo->tm_mon+1 == month){
                    if(timeinfo->tm_mday < Day){
                        dMonth = dMonth -1;
                        dDay = 29 + dDay;
                    }else{
                        dMonth = dMonth -12;
                        dYear = dYear +1;
                    }
                }else{
                    if(timeinfo->tm_mday < Day){
                        dMonth = dMonth -1;
                        dDay = 29 + dDay;
                    }
                }
            }
        }else{
            if(timeinfo->tm_mon+1 == month){
                if(timeinfo->tm_mday < Day){
                    dMonth = dMonth -1;
                    dDay = 28 + dDay;
                }else{
                    dMonth = dMonth -12;
                    dYear = dYear +1;
                }
            }else{
                if(timeinfo->tm_mday < Day){
                    dMonth = dMonth -1;
                    dDay = 28 + dDay;
                }
            }
        }
    }

    std::cout << "the Age is : " << dYear   << " years and " <<  dMonth << " months and " << dDay  << " days old" << std::endl;


}
