#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    std::ifstream Readobj;


    Readobj.open("main.txt");


    std::string Name;
    int Age;
    bool isItTrue;

    while(!Readobj.eof()){
        Readobj >> Name >> Age >> isItTrue;
        //bool alpha iin the line below changes the value of bool from 0 to true or false
        std::cout << "name : "<< std::left <<std::setw(10)<<Name;
        std::cout <<"| Age is :"<<std::setw(4)<<Age <<std::right;
        std::cout <<" | That is : "<< std::boolalpha <<isItTrue <<std::endl;
    }
    //this while down also print the txt file but we can not manipulate it
/*
    std::string line;
    while (std::getline(Readobj,line)){
        std::cout <<line <<std::endl;
    }
    */
    return 0;
}
