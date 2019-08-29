#include "Vehicle.h"
#include <iomanip>
#include <iostream>


//default constructor
Vehicle::Vehicle()
:Vehicle(0 ,"nothing","nothing","nothing"){}

//overloaded constructor

Vehicle::Vehicle(int vin ,std::string make,std::string model,std::string color){
    this->vin = vin;
    this->make = make;
    this->model = model;
    this->color = color;
}
//copy constructor
Vehicle::Vehicle(Vehicle const &obj){}
//destructor
Vehicle::~Vehicle(){}

  //setter
void Vehicle::setVin(int vin){
    this->vin = vin;
}

void Vehicle::setMake(std::string make){
    this->make = make;
}

void Vehicle::setModel(std::string model){
    this->model = model;
}

void Vehicle::setColor(std::string color){
    this->color = color;
}


//getter
int Vehicle::getVin(){
    return this->vin;
}
std::string Vehicle::getMake(){
    return this->make;
}
std::string Vehicle::getModel(){
    return this->model;
}
std::string Vehicle::getColor(){
    return this->color;
}


//functions
void Vehicle::toString(){
    std::cout <<"[" << "VIN:" << this->vin <<"  Make:"<< this->make <<"  Model:"<< this->model <<"  Color:"<< this->color << "]" << std::endl;
}
