#include "Car.h"
//default constructor
Car::Car(){}
//overloaded constructor
Car::Car(int Cylinder,int HorsePower,string Engine_Type,string make ,int year,string model)
:Engine(Cylinder,HorsePower,Engine_Type){
    this->make=make;
    this->year=year;
    this->model=model;
}
int Car::getYear(){ return year;}
void Car::setYear (int year){this->year = year;}
string Car::getModel(){ return model;}
void Car::setModel (string model){this->model = model;}
string Car::getMake(){ return make;}
void Car::setMake (string make){this->make = make;}
//destractor
Car::~Car(){}



