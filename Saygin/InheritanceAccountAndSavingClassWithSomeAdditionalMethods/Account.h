#pragma once
#include <iostream>
#include <string>

class Account {

private:
	std::string name;
	double balance;

protected:
	int id;

public:
	//default constructor
	Account();
	//overloaded constructor
	Account(double balanceValue);
	//overloaded constructor
	Account(std::string nameVal, double balanceVal, int idVal);

	//copy constructor
	Account(Account &obj);

	//destructor
	~Account();

	//getters
	std::string getName();
	double getBalance();
	
	//methods
	void printAccount(); 
	bool withdraw(double amount);
	bool deposit(double amount);

};