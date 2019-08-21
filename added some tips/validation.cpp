#include <iostream>
#include <string>
#include <cstdlib>

int getTheNumber() {

	int number;

	std::cout << "enter your choice : ";
	std::cin >> number;

	while (!std::cin.good()) {
		std::cout << "Ops, not an integer value, try again: ";
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
		std::cin >> number;
	}

	return number;
}

int getTheDigit() {

	std::string number{};
	std::cout << "enter your choice : ";
	std::cin >> number;

	bool flag{ true };

	do
	{
		for (size_t i = 0; i < number.length(); i++) {
			if (!isdigit(number[i])) {
				flag = false;
				break;
			}
			if (i == number.length() - 1) {
				flag = true;
			}
		}
		if (!flag) {
			std::cout << "Ops, not an integer value, try again: ";
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
			std::cin >> number;
		}
	} while (!flag);

	return stoi(number);
}

int main() {

	int choice{};

	do
	{
		choice = getTheDigit();
		//choice = getTheNumber();

		switch (choice)
		{
		case 1:
			std::cout << "you selected 1:" << std::endl;
			break;
		case 2:
			std::cout << "you selected 2:" << std::endl;
			break;
		case 3:
			std::cout << "you selected 1:" << std::endl;
			break;
		default:
			std::cout << "not options in the menu" << std::endl;
			break;
		}


	} while (choice != 0);


	system("pause");
	return 0;
}

