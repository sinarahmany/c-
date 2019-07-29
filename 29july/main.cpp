#include <iostream>

using namespace std;

int main()
{
    //All 3 has the same output
    std::cout << "Hello world!" << std::endl;
    std::cout << "Hello world! \n" ;
    std::cout << "Hello world! \x0A" ;

    std::cout << "Gice me a number \n" ;
    int number;
    std::cin >> number;
    std::cout << "you typed " << number << "!" << std::endl;

    std::cout << "Gice me one more number \n" ;
    int number2;
    std::cin >> number2;
    std::cout << "Your numbers are "<< number << "," << number2 << std::endl;
    std::cout << "the addition of those numbers are " << number+number2 <<std::endl;
    return 0;
}
