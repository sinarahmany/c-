#pragma once
#include <iostream>
#include <string>
#include "Account.h"

class Saving : public Account {

private:
	double interestRate;

public:

	//default constructor
	Saving();

	//overloaded constructor
	Saving(double balanceVal, int idVal);

	//overloaded constructor
	Saving(double interestRateValue);

	//copy constructor
	Saving(const Saving &obj);

	//destructor
	~Saving();

	//getters
	double getInteresRate() const;
	
	//methods
	void canIaccessToProtected();
	//override method
	void printAccount();
	bool deposit(double amount);

};