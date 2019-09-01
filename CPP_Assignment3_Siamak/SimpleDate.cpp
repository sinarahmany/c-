#include "Functions.h"

// Default constructor
SimpleDate::SimpleDate():SimpleDate(1, 1, 1970, "Tuesday"){
    //strColor("\n**** default constructor called with: ", 8, 1); SimpleDate::print();
    //std::cout<<" "; strColor(this->dayofweek, 14, 1); strColor(" ****\n", 8, 1);
}

// Overloaded constructor
SimpleDate::SimpleDate(int month, int day, int year, std::string dayofweek){
    if (checkDate(month, day, year)){
        this->month=month;
        this->day=day;
        this->year=year;
        this->dayofweek=dayofweek;
        //strColor("\n**** overloaded constructor called with: ", 8, 1); print(); strColor(" ****\n", 8, 1);
    }else{
        strColor("\nDate you enter is not valid!", 12, 1);
    }
}

// Copy constructor
SimpleDate::SimpleDate(const SimpleDate *obj){
    this->month=obj->month;
    this->day=obj->day;
    this->year=obj->year;
    this->dayofweek=obj->dayofweek;
    //strColor("\n**** overloaded constructor called with: ", 8, 1); print(); strColor(" ****\n", 8, 1);
}

// Destructor (empty)
SimpleDate::~SimpleDate(){
}

// A function to set the date
void SimpleDate::setDate(int month, int day, int year, std::string dayofweek){
    if (checkDate(month, day, year)){
        this->month=month;
        this->day=day;
        this->year=year;
        this->dayofweek=dayofweek;
    }else{
        strColor("\nDate you enter is not valid!", 12, 1);
    }
}

// To get and set day members
int SimpleDate::getDay(){
    return this->day;
}

void SimpleDate::setDay(int day){
    this->day=day;
}

// To get and set month members
int SimpleDate::getMonth(){
    return this->month;
}

void SimpleDate::setMonth(int month){
    this->month=month;
}

// To get and set year members
int SimpleDate::getYear(){
    return this->year;
}

void SimpleDate::setYear(int year){
    this->year=year;
}

// To get and set dayofweek members
std::string SimpleDate::getDOW(){
    return this->dayofweek;
}

void SimpleDate::setDOW(std::string dayofweek){
    this->dayofweek=dayofweek;
}

// A function to print Date
void SimpleDate::print(){
    strColor(strMonth(), 14, 1); strColor("/", 8, 1);
    strColor(strDay(), 14, 1); strColor("/", 8, 1);
    strColor(strYear(), 14, 1);
}

// A utility function for checking year and month and day values
bool SimpleDate::checkDate(int month, int day, int year){
    return(checkMonth(month)&&checkDay(day)&&checkYear(year) ? true : false);
}

// A utility function for checking day
bool SimpleDate::checkDay(int day){
    return day>-1&&day<32 ? true : false;
}

// A utility function for checking month
bool SimpleDate::checkMonth(int month){
    return(month>-1&&month<13 ? true : false);
}

// A utility function for checking yearbool SimpleDate::checkYear(int year){
    return(year>-1 ? true : false);
}

// A funciton to print month in 2 digit string
std::string SimpleDate::strMonth(){
    return(this->month<10&&this->month>-1 ? "0"+std::to_string(this->month) : std::to_string(this->month));
}

// A funciton to print day in 2 digit string
std::string SimpleDate::strDay(){
    return(this->day<10&&this->day>-1 ? "0"+std::to_string(this->day) : std::to_string(this->day));
}

// A funciton to print year in 4 digit string
std::string SimpleDate::strYear(){
    return(this->year<10&&this->year>-1 ? "000"+std::to_string(this->year) :
            (this->year<100&&this->year>-1 ? "00"+std::to_string(this->year) :
            (this->year<1000&&this->year>-1 ? "0"+std::to_string(this->year) :
            std::to_string(this->year))));
}
