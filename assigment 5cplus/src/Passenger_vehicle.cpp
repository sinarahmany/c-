#include "Passenger_vehicle.h"
#include <iomanip>
#include <iostream>

//default constructor
Passenger_vehicle::Passenger_vehicle() : type{ "unknown type"} ,NoOfPassengers{ 0 }
{
	std::cout << "Passenger_vehicle default constructor called!" << std::endl;
}

//destructor
Passenger_vehicle::~Passenger_vehicle() {
	std::cout << "Passenger_vehicle desctructor called!" << std::endl;
}

//copy constructor
Passenger_vehicle::Passenger_vehicle(const Passenger_vehicle &obj): type {obj.type}, NoOfPassengers {obj.NoOfPassengers}{}

//getters
std::string Passenger_vehicle::getType() const {
	return type;
}
int Passenger_vehicle::getNoOfPassengers() const {
	return NoOfPassengers;
}

//setters
std::string Passenger_vehicle::setType(std::string type) const {
    type=type;
}
int Passenger_vehicle::setNoOfPassengers(int NoOfPassengers) const {
	 NoOfPassengers=NoOfPassengers;
}

