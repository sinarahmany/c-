#include <iostream>

using namespace std;

int main()
{
    //All 3 has the same output
    std::cout << "Hello world!" << std::endl;
    std::cout << "Hello world! \n" ;
    std::cout << "Hello world! \x0A" ;

    std::cout << "Give me a number \n" ;
    int number;
    std::cin >> number;
    std::cout << "you typed " << number << "!" << std::endl;

    std::cout << "Give me one more number \n" ;
    int number2;
    std::cin >> number2;
    std::cout << "Your numbers are "<< number << "," << number2 << std::endl;
    std::cout << "the addition of those numbers is " << number+number2 <<std::endl;
    //dynamic casting
    std::cout << "the average of those numbers is " << (double)(number+number2)/2 <<std::endl;
    //it`s more secure static casting
    std::cout << "the average of those numbers is " << (static_cast<double>(number+number2)/2) <<std::endl;

    //signed and unsigned
    //unsigned values are just for positive values
    unsigned int max = 1;


    return 0;
}
