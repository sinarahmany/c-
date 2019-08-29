#include "Passenger_vehicle.h"
#include <iomanip>
#include <iostream>
//defult constructor
Passenger_vehicle::Passenger_vehicle()
:Passenger_vehicle("nothing",0,0 ,"nothing","nothing","nothing"){}

//overloaded constructor

Passenger_vehicle::Passenger_vehicle(std::string type, int numberOfPassengers, int vin ,std::string make,std::string model,std::string color):Vehicle(vin ,make, model, color){
    this->type = type;
    this->numberOfPassengers = numberOfPassengers;
}
//copy constructor
Passenger_vehicle::Passenger_vehicle(Passenger_vehicle const &obj){}
//destructor
Passenger_vehicle::~Passenger_vehicle(){}

//setter
void Passenger_vehicle::setUsage(std::string type){
    this->type = type;
}

void Passenger_vehicle::setLength(int numberOfPassengers){
    this->numberOfPassengers = numberOfPassengers;
}

//getter
std::string Passenger_vehicle::getType(){
    return this->type;
}
int Passenger_vehicle::getNumberOfPassengers(){
    return this->numberOfPassengers;
}



//functions
void Passenger_vehicle::toString(){
     Vehicle::toString();
    std::cout <<"[" << "Type:" << this->type <<"  NumberOfPassengers:"<< this->numberOfPassengers << "]" << std::endl;
}
