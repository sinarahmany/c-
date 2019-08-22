#include <iostream>
#include <string>
#include "Account.h"

//default constructor
Account::Account() : name{ "unknown checking account" }, balance{ 0.0 }, id{ 100 }
{
	std::cout << "account default constructor called!" << std::endl;
}

//overloaded constructor
Account::Account(double balanceValue) : balance{ balanceValue }
{
	name = "unknown checking account";
	id = 100;
}

//overloaded constructor
Account::Account(std::string nameVal, double balanceVal, int idVal)
	: name{ nameVal }, balance{ balanceVal }, id{ idVal }
{
	std::cout << "account default constructor called!" << std::endl;
}

//copy constructor
Account::Account(Account &obj): balance {obj.balance}, id{ obj.id}, name {obj.name}{

}

//destructor
Account::~Account() {
	std::cout << "account desctructor called!" << std::endl;
}

//getters
std::string Account::getName() {
	return name;
}
double Account::getBalance() {
	return balance;
}

//methods
void Account::printAccount() {
	std::cout << "account id : " << id << std::endl;
	std::cout << "account name : " << name << std::endl;
	std::cout << "account balance : " << balance << std::endl;
}

bool Account::withdraw(double amount) {
	
	if (balance - amount >= 0) {
		balance -= amount;
		return true;
	}
	else {
		std::cout << "You have " << balance << " in your account." << std::endl;
		std::cout << "please try again" << std::endl;
		return false;
	}

}
bool Account::deposit(double amount) {

	if (amount > 0) {
		balance += amount;
		return true;
	}
	else {
		std::cout << "you can not deposit negative amount!" << std::endl;
		return false;
	}

}