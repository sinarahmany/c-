#include <iostream>
#include <vector>
#include <array>

int main() {
	//dynamic array
	//vector
	//flexible array
	std::vector <int> myDynamicArray{1,2};
	myDynamicArray.push_back(35);

	//accessing the array elements
	std::cout << "myDynamicArray[2] : " << myDynamicArray[2] <<std::endl;
	std::cout << "myDynamicArray.at(2): " << myDynamicArray.at(2) << std::endl;

	//alternative way to create array 
	std::array<int, 10> arrayWithArrayName{0,1,2,3,4,5,6,7,8,9};

	//static array
	int anArray[]{ 1,2,3,3415,5 }; // c++ 11 initialize

	system("pause");
	return 0;
}