#include "functions.h"

#include <iostream>
//global variables
const int stackSize = 100;
int stackArr[stackSize];
int ToS {0};
void somedatatypes(){

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


    //C++11
    std::cout <<"Hello, what is your name ? " <<std::endl;
    std::string name;
    std::cin >> name;
    std::cout <<"Welcome ,Dear " << name <<std::endl;


    std::string string1{};//empty
    std::string string2{"ITD Canada"};
    std::string string3{string2};
    std::string string4{"ITD Canada",5};
    std::string string5{string3,3,8};
    std::string string6(5, 'O');

    std::cout << string1 << std::endl;
    std::cout << string2 << std::endl;
    std::cout << string3 << std::endl;
    std::cout << string4 << std::endl;
    std::cout << string5 << std::endl;
    std::cout << string6 << std::endl;

    char string7[10];
    //string7 = "ITDCanada"; illegal
   // strcpy(string7,"ITDCanada");
    char string8[] = "assign anything to here";//the last char is \0

    for(int i=0 ;i < sizeof(string8)/sizeof(char); i++){
        std::cout << string8[i] << " " ;
    }

}


