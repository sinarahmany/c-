#include <iostream>
#include <string>
#include <fstream>

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
        std::cout << "name : "<<Name<<"| Age is :"<<Age <<" | That is : "<< std::boolalpha <<isItTrue <<std::endl;


    }

    return 0;
}
