#include "Heavy_Duty_Truck.h"


//defult constructor
Heavy_Duty_Truck::Heavy_Duty_Truck()
:Heavy_Duty_Truck(0,0,1,0,1){}

//overloaded constructor

Heavy_Duty_Truck::Heavy_Duty_Truck(double tonnage, int numberOfWheels,bool cabSize, int horsePower, bool hasWinch):Truck(cabSize,horsePower,hasWinch){
    this->tonnage = tonnage;
    this->numberOfWheels = numberOfWheels;
}
//copy constructor
Heavy_Duty_Truck::Heavy_Duty_Truck(Heavy_Duty_Truck const &obj){}
//destructor
Heavy_Duty_Truck::~Heavy_Duty_Truck(){}

//setter
void Heavy_Duty_Truck::setTonnage(double tonnage){
    this->tonnage = tonnage;
}

void Heavy_Duty_Truck::setNumberOfWheels(int numberOfWheels){
    this->numberOfWheels = numberOfWheels;
}

//getter
double Heavy_Duty_Truck::getTonnage(){
    return this->tonnage;
}
int Heavy_Duty_Truck::getNumberOfWheels(){
    return this->numberOfWheels;
}



//functions
void Heavy_Duty_Truck::toString(){
    Truck::toString();
    std::cout <<"[" << "Tonnage:" << this->tonnage <<"  NumberOfWheels:"<< this->numberOfWheels << "]" << std::endl;
}
