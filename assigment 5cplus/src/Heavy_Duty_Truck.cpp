#include "Heavy_Duty_Truck.h"



//default constructor
Heavy_Duty_Truck::Heavy_Duty_Truck() : Tonnage{ 1 },NoOfWheels{ 0 }
{
	std::cout << "Heavy_Duty_Truck default constructor called!" << std::endl;
}

//destructor
Heavy_Duty_Truck::~Heavy_Duty_Truck() {
	std::cout << "Heavy_Duty_Truck desctructor called!" << std::endl;
}

//copy constructor
Heavy_Duty_Truck::Heavy_Duty_Truck(const Heavy_Duty_Truck &obj): Tonnage {obj.Tonnage}, NoOfWheels{ obj.NoOfWheels}{}

//getters
double Heavy_Duty_Truck::getTonnage() const {
	return Tonnage;
}
int Heavy_Duty_Truck::getNoOfWheels() const {
	return NoOfWheels;
}


//setters
double Heavy_Duty_Truck::setTonnage(double Tonnage) const {
    Tonnage=Tonnage;
}
int Heavy_Duty_Truck::setNoOfWheels(int NoOfWheels) const {
	 NoOfWheels=NoOfWheels;
}
