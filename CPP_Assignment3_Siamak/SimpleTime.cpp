#include "Functions.h"

// default constructor
SimpleTime::SimpleTime():SimpleTime(0,0,0,"+00:00"){
    //strColor("\n**** default constructor called with: ", 8, 1); printCivilian();
    //std::cout<<" "; strColor(this->zone, 14, 1); strColor(" ****\n", 8, 1);
}

// override constructor
SimpleTime::SimpleTime(int hour, int minute, int second, std::string zone){
    if (checkTime(hour, minute, second)){
        this->hour = hour;
        this->minute = minute;
        this->second = second;
        this->zone = zone;
        //strColor("\n**** overloaded constructor called with: ", 8, 1); printCivilian(); strColor(" ****\n", 8, 1);
    }else{
        strColor("\nTime you enter is not valid!", 12, 1);
    }
}

// copy constructor
SimpleTime::SimpleTime(SimpleTime *obj){
    this->hour = obj->hour;
    this->minute = obj->minute;
    this->second = obj->second;
    this->zone = obj->zone;
    //strColor("\n**** copy constructor called with: ", 8, 1); printCivilian(); strColor(" ****\n", 8, 1);
}

// Destructor (empty)
SimpleTime::~SimpleTime(){
}

// A function to get 4 input and set time
void SimpleTime::setTime(int hour, int minute, int second, std::string zone){  // +setTime(int,int,int, string):void
    if (checkTime(hour, minute, second)){
        this->hour = hour;
        this->minute = minute;
        this->second = second;
        this->zone = zone;
        //strColor("\nTime set by: ", 8, 1); printCivilian(); strColor(".\n", 8, 1);
    }else{
        strColor("\nTime you enter is not valid!", 12, 1);
    }
}

// hour setter function
void SimpleTime::setHour(int hour){
    this->hour = hour;
}

// hour getter function
int SimpleTime::getHour(){
    return hour;
}

// minute setter function
void SimpleTime::setMinute(int minute){
    this->minute = minute;
}

// minute getter function
int SimpleTime::getMinute(){
    return minute;
}

// second setter function
void SimpleTime::setSecond(int second){
    this->second = second;
}

// second getter function
int SimpleTime::getSecond(){
    return second;
}

// zone setter function
void SimpleTime::setZone(std::string zone){
    this->zone = zone;
}

// zone getter function
std::string SimpleTime::getZone(){
    return zone;
}
// A function to print time in Civilian format liek "03:23:54 PM"
void SimpleTime::printCivilian(){
    int tmpHour = this->hour>11 ? this->hour-12 : this->hour;
    strColor(tmpHour<10 ? "0"+std::to_string(tmpHour) : std::to_string(tmpHour), 14, 1); strColor(":", 8, 1);
    strColor(strMinute(), 14, 1); strColor(":", 8, 1);
    strColor(strSecond(), 14, 1); strColor(this->hour>11?" PM":" AM", 14, 1);
}

// A function to print time in Military format like "15:23"
void SimpleTime::printMilitary(){
    strColor(strHour(), 14, 1);strColor(":", 8, 1);
    strColor(strMinute(), 14, 1);
}

// A function to print time in Zulu format like "1523Z"
void SimpleTime::printZulu(){
    strColor(strHour(), 14, 1); strColor(strMinute(), 14, 1); strColor("Z", 14, 1);strColor(this->zone, 14, 1);
}

// A function to check time input
bool SimpleTime::checkTime(int hour, int minute, int second){
    return(checkHour(hour)&&checkMinute(minute)&&checkSecond(second) ? true : false);
}

// A function to check hour property of SimpleTime Class
bool SimpleTime::checkHour(int hour){
    return(hour>-1&&hour<24 ? true : false);
}

// A function to check minute property of SimpleTime Class
bool SimpleTime::checkMinute(int minute){
    return(minute>-1&&minute<61 ? true : false);
}

// A function to check second property of SimpleTime Class
bool SimpleTime::checkSecond(int second){
    return(second>-1&&second<61 ? true : false);
}

// A function to return hour to two digit string format
std::string SimpleTime::strHour(){
    return(this->hour<10&&this->hour>-1 ? "0"+std::to_string(this->hour) : std::to_string(this->hour));
}

// A function to return minute to two digit string format
std::string SimpleTime::strMinute(){
    return(this->minute<10&&this->minute>-1 ? "0"+std::to_string(this->minute) : std::to_string(this->minute));
}

// A function to return second in two digit string format
std::string SimpleTime::strSecond(){
    return(this->second<10&&this->second>-1 ? "0"+std::to_string(this->second) : std::to_string(this->second));
}
