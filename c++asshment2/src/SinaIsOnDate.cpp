#include "SinaIsOnDate.h"

    // default constructor
    SinaIsOnDate::SinaIsOnDate():SinaIsOnDate(1,1,1970){
        strDate("\ndefault constructor\n", 1);
    }

    // overloaded constructor
    SinaIsOnDate::SinaIsOnDate(int month, int day, int year){
        this->day = day;
        this->month = month;
        this->year = year;
        strDate("\noverloaded constructor : " + std::to_string(this->month) +
                                                        + " day: " + std::to_string(this->day) +
                                                        + " year: " + std::to_string(this->year) + "\n", 1);
    }

    // copy constructor
    SinaIsOnDate::SinaIsOnDate(const SinaIsOnDate &obj){
        this->day = obj.day;
        this->month = obj.month;
        this->year = obj.year;
        strDate("\ncopy constructor : " + std::to_string(this->month) +
                                                        + " day: " + std::to_string(this->day) +
                                                        + " year: " + std::to_string(this->year) + "\n", 1);
    }

    // Destructor
    SinaIsOnDate::~SinaIsOnDate(){
    }

    //getters and setters
    int SinaIsOnDate::getDay(){
        return day;
    }

    void SinaIsOnDate::setDay(int day){
        this->day = day;
    }
    int SinaIsOnDate::getMonth(){
        return month;
    }
    void SinaIsOnDate::setMonth(int month){
        this->month = month;
    }

    int SinaIsOnDate::getYear(){
        return year;
    }
    void SinaIsOnDate::setYear(int year){
        this->year = year;
    }

    // checking the Day

    std::string SinaIsOnDate::checkSinaDay(int day){
        if(day>0 && day<32){
            this->day = day;
            return(day<10 ? "0"+std::to_string(day) : std::to_string(day));
        }else {
            this->day = -1;
            return("-1");
        }
    }

    // checking the month
    std::string SinaIsOnDate::checkSinaMonth(int month){
        if(month>0 && month<13){
            this->month = month;
            return(month<10 ? "0"+std::to_string(month) : std::to_string(month));
        } else{
            this->month = -1;
            return("-1");
        }
    }

    // checking the year
    std::string SinaIsOnDate::checkSinaYear(int year){
        if(year>0){
            this->year = year;
            return(std::to_string(year));
        }else {
            this->year = -1;
            return("-1");
        }
    }

    // leap year
    bool checkSinaLeapYear(int year){
       if (((year%4 == 0) && (year%100 != 0)) || (year%400 == 0)) return true;
       return false;
    }

    void SinaIsOnDate::printSinaDate(){
        strDate("\nThe Date is: ", 1);
        strDate(checkSinaDay(this->day)+"/"+checkSinaMonth(this->month)+"/"+checkSinaYear(this->year),1);
        strDate("\nand " + std::to_string(this->year) + (checkSinaLeapYear(this->year)?" is a":" is not a") + " Leap year.\n\n",1);
    }

    void strDate(std::string strText, int intQty){

        for (int i=0; i<intQty; i++) std::cout<<strText;

    return;
}
