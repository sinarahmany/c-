#include <iostream>
#include "Animal.h"
#include "Dog.h"
using namespace std;


int main()
{
    Dog Doggy;
    Doggy.setLegs(4);
    Doggy.setTail(true);
    Doggy.sound();
    return 0;
}


