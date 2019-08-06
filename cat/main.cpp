#include <iostream>
#include <string>
#include <cat.h>

using namespace std;

int main()
{
    cat blablaCat;
    blablaCat.eat();
    blablaCat.name = "boolbool";
    blablaCat.color = "metalic";
    std::cout << "the Name of the cat is " <<blablaCat.name <<std::endl;
    std::cout << "the Color of the cat is " <<blablaCat.color <<std::endl;


    return 0;
}
