#pragma once
#include <iostream>
#include <string>
#include "Saving.h"
#include "Account.h"

//default constructor
Saving::Saving() {
	//Account("Saving account", 500, 100);
	std::cout << "saving default constructor called!" << std::endl;
	interestRate = 1;// percent
}

//overloaded constructor
Saving::Saving(double balanceVal, int idVal)
		:Account{ "saving account", balanceVal, idVal } {
		interestRate = 5; //%
	}

//overloaded constructor
Saving::Saving(double interestRateValue) :Account{} {
		interestRate = interestRateValue;
	}

//copy constructor
Saving::Saving(Saving &obj) :Account(obj), interestRate{obj.interestRate} {

}

//destructor
Saving::~Saving() {
	std::cout << "saving destructor called!" << std::endl;
}

//getters
double Saving::getInteresRate() {
	return interestRate;
}

//methods
void Saving::canIaccessToProtected() {
	std::cout << id; // yes you can;
}

//override method
void Saving::printAccount() {
	Account::printAccount();
	std::cout << "interest rate : " << interestRate << std::endl;
}

bool Saving::deposit(double amount) {
	amount += amount*interestRate / 100;
	return Account::deposit(amount);
}