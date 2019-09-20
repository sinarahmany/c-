#include "Bike.h"
//default constructor
Bike::Bike(){}
//overloaded constructor
Bike::Bike(int Cylinder,int HorsePower,string Engine_Type,string make ,int EngineVol)
:Engine(Cylinder,HorsePower,Engine_Type){
    this->make=make;
    this->EngineVol=EngineVol;
}
string Bike::getMake(){ return make;}
void Bike::setMake (string make){this->make = make;}
int Bike::getEngineVol(){ return EngineVol;}
void Bike::setEngineVol (int EngineVol){this->EngineVol = EngineVol;}
Bike::~Bike(){}
