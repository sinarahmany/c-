#include <iostream>
#include "Account.h"
#include "Saving.h"
#include <iomanip>

int main() {

	Account account1("checking account", 1500, 101);
	account1.printAccount();
	
	std::cout << "-withdraw 500-" << std::endl;
	account1.withdraw(500);
	account1.printAccount();

	std::cout << "-deposit 456-" << std::endl;
	account1.deposit(456);
	account1.printAccount();

	std::cout << "-----------------" << std::endl;
	Saving account2(500, 102);//500
	account2.printAccount();

	std::cout << "-withdraw 100-" << std::endl;
	account2.withdraw(100); //400
	account2.printAccount();


	std::cout << "-deposit 1000-" << std::endl;
	account2.deposit(1000); // 1000+ 1000*5/100 = 1050 --> 1450 
	account2.printAccount();

	std::cout << "-attempt to widraw 101-" << std::endl;

	Account account3("checking account 2", 100, 103);

	account3.withdraw(101);
	account3.printAccount();

	account3.deposit(-10000);
	account3.printAccount();


	int a = 10;
	int b = 3;

	std::cout << static_casting<double>(a) / b << std::endl;


	system("pause");
	return 0;
}