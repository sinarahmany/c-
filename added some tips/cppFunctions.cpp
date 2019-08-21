#include <iostream>

void multiplyTheValues(int a, int &b, int* anArray) {
	a *= 2;
	b *= 2;

	for (size_t i = 0; i < 4; i++)
	{
		anArray[i] *= 2;
	}
}

int main() {
	
	//code here ...
	int x{ 10 };//pass by values
	int y{ 20 }; //pass by reference
	int numbers[4]{1,2,3,4}; //pass by reference
	
	multiplyTheValues(x, y,numbers);

	std::cout << "the value of x and y respectively: " << x << ", " << y << std::endl;

	for (int element : numbers)
	{
		std::cout << element << std::endl;
	}

	system("pause");
	return 0;
}