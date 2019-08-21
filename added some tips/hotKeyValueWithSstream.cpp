#include <iostream>
#include <string>
#include <sstream>
#include <limits>

int getUserInput() {
	int number{};
	std::string line{};

	bool flag = false;

	do
	{
		std::cout << "give me a number: ";
		std::cin >> line;

		std::istringstream iss{ line };

		if (iss >> number) {
			flag = true;
		}
		else {
			std::cout << "thats not an integer" << std::endl;
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	} while (!flag);
	return number;
}

int main() {

	int number{};

	do
	{
		number = getUserInput();
		
		switch (number)
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
		case 0:
			std::cout << "Bye..." << std::endl;
			break;
		default:
			std::cout << "not options in the menu" << std::endl;
			break;
		}
	} while (number != 0);

	system("pause");
	return 0;
}
