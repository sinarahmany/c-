#include "Pickup.h"


//defult constructor
Pickup::Pickup()
:Pickup("nothing",0,1,0,1){}

//overloaded constructor

Pickup::Pickup(std::string usage, int length,bool cabSize, int horsePower, bool hasWinch):Truck(cabSize,horsePower,hasWinch){
    this->usage = usage;
    this->length = length;
}
//copy constructor
Pickup::Pickup(Pickup const &obj){}
//destructor
Pickup::~Pickup(){}

//setter
void Pickup::setUsage(std::string usage){
    this->usage = usage;
}

void Pickup::setLength(int length){
    this->length = length;
}

//getter
std::string Pickup::getUsage(){
    return this->usage;
}
int Pickup::getLength(){
    return this->length;
}



//functions
void Pickup::toString(){
    Truck::toString();
    std::cout <<"[" << "Usage:" << this->usage <<"  Length:"<< this->length << "]" << std::endl;
}
