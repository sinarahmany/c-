#include "Vehicle.h"
#include <iomanip>
#include <iostream>


//default constructor
Vehicle::Vehicle() : Make{ "unknown make" }, model{ "unknown model" }, color{"White"},VIN{ 0000 }
{
	std::cout << "Vehicle default constructor called!" << std::endl;
}
//overloaded constructor
Vehicle::Vehicle(std::string Makeval, std::string modelval,std::string colorval ,int VINval)
	: Make{ Makeval }, model {modelval},color{ colorval }, VIN{ VINval }
{
	std::cout << "Vehicle overload constructor called!" << std::endl;
}

//destructor
Vehicle::~Vehicle() {
	std::cout << "Vehicle desctructor called!" << std::endl;
}

//copy constructor
Vehicle::Vehicle(const Vehicle &obj): Make {obj.Make}, model{ obj.model}, color {obj.color}{}

//getters
std::string Vehicle::getMake() const {
	return Make;
}
std::string Vehicle::getModel() const {
	return model;
}
std::string Vehicle::getcolor() const {
	return color;
}

//setters
std::string Vehicle::setMake(std::string Make) const {
    Make=Make;
}
std::string Vehicle::setModel(std::string model) const {
	 model=model;
}
std::string Vehicle::setcolor(std::string color) const {
	 color=color;
}
