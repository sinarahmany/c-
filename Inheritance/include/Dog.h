#ifndef DOG_H
#define DOG_H
#include "Animal.h"
#include <iostream>


class Dog:public Animal
{
    public:
        void sound(){
            std::cout << "i made wooo sound" << std::endl;

        }
};

#endif // DOG_H
