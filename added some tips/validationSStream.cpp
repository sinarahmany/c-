#include <iostream>
#include <string>
#include <sstream>
#include <limits>

int main() {

	int value{};
	std::string userInput{};
	bool flag = false;

	do
	{
		std::cout << "give me a number: ";
		std::cin >> userInput;

		for (size_t i = 0; i < userInput.length(); i++) {
			if (ispunct(userInput[i])) {
				userInput.erase(i);
			}
		}

		std::istringstream ss{ userInput };

		if (ss >> value) {
			std::cout << "the value is integer!!" << std::endl;
			flag = true;
		}	else {
			std::cout << "the value is not integer!";
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	} while (!flag);

	std::cout << userInput << std::endl;

	system("pause");
	return 0;
}
