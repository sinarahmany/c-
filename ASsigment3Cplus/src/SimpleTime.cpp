#include "SimpleTime.h"
#include <string>
#include <iostream>


int SimpleTime::getHour(){
    return Hour;
}
void SimpleTime::setHour(int Hour){
    this->Hour = Hour;
}

int SimpleTime::getMinute(){
    return Minute;
}
void SimpleTime::setMinute(int Minute){
    this->Minute = Minute;
}

int SimpleTime::getSecond(){
    return Second;
}
void SimpleTime::setSecond(int Second){
    this->Second = Second;
}

std::string SimpleTime::getZone(){
    return Zone;
}
void SimpleTime::setZone(std::string Zone){
    this->Zone = Zone;
}

//default constructor
//SimpleTime::SimpleTime():
//SimpleTime(0,0,0,"AM")
//{

//}
//overloaded constructor
//SimpleTime:: SimpleTime(int Hour, int Minute,int Second, std::string Zone)
//: SimpleTime(Hour,Minute,0,Zone){
//
//}
void printCivilian(){

}
void printMilitary(){

}
void printZulu(){

}
bool checkTime(int, int, int){

}
bool checkHour(int){

}
bool checkMinute(int){

}
bool checkSecond(int){

}
