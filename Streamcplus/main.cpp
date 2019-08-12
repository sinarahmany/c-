#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    std::ifstream Readobj;
    Readobj.open("main.txt");
    std::string line;
    int bestnumber;
    double coffeePrice;
    bool isItTrue;

    Readobj >> line >> bestnumber >> coffeePrice >> isItTrue;
    std::cout << "Line is : "<<line <<std::endl;
    std::cout <<"Best Number is : " <<bestnumber <<std::endl;
    std::cout <<"Coffee price is : " << coffeePrice <<std::endl;
    std::cout << "isitTrue = "<< isItTrue <<std::endl;


    return 0;
}
