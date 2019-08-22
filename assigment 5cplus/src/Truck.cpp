#include "Truck.h"


//default constructor
Truck::Truck() : CabSize{ "zero" }, HorsePower{ 0 }, HasWinch{true}
{
	std::cout << "Truck default constructor called!" << std::endl;
}

//destructor
Truck::~Truck() {
	std::cout << "Truck desctructor called!" << std::endl;
}

//copy constructor
Truck::Truck(const Truck &obj): CabSize {obj.CabSize}, HorsePower{ obj.HorsePower}, HasWinch {obj.HasWinch}{}

//getters
std::string Truck::getCabSize() const {
	return CabSize;
}
int Truck::getHorsePower() const {
	return HorsePower;
}
bool Truck::getHasWinch() const {
	return HasWinch;
}

//setters
std::string Truck::setCabSize(std::string CabSize) const {
    CabSize=CabSize;
}
int Truck::setHorsePower(int HorsePower) const {
	 HorsePower=HorsePower;
}
bool Truck::setHasWinch(bool HasWinch) const {
	 HasWinch=HasWinch;
}
