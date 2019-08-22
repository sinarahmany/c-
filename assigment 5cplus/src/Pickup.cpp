#include "Pickup.h"



//default constructor
Pickup::Pickup() : Usage{ "unknown Usage" },Length{ 1 }
{
	std::cout << "Pickup default constructor called!" << std::endl;
}

//destructor
Pickup::~Pickup() {
	std::cout << "Pickup desctructor called!" << std::endl;
}

//copy constructor
Pickup::Pickup(const Pickup &obj): Usage {obj.Usage}, Length {obj.Length}{}

//getters
std::string Pickup::getUsage() const {
	return Usage;
}
int Pickup::getLength() const {
	return Length;
}

//setters
std::string Pickup::setUsage(std::string Usage) const {
    Usage=Usage;
}
int Pickup::setLength(int Length) const {
	 Length=Length;
}
