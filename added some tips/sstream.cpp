#include <iostream>
#include <string>
#include <sstream>


int main() {

	std::string data{ "string 35 101.99" };

	std::istringstream readStream{ data };

	std::string a;
	int b;
	double c;

	readStream >> a >> b >> c;

	a = a.append("!!!");
	b *= 5;
	c += 100;
	std::cout << a << std::endl;
	std::cout << b  << std::endl;
	std::cout << c << std::endl;

	
	std::ostringstream writeStream;
	writeStream << a << " " << b << " " << c << std::endl;

	std::cout << writeStream.str();
	

	system("pause");
	return 0;
}
