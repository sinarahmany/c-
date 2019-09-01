#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <stdio.h>
#include "../Date.hpp"
#include <iostream>

class Animal
{
    public:
        void setId(int id);
    void setName(std::string name);
    void setHeight(int height);
    void setWeight(int weight);

    int getId();
    std::string getName();
    int getHeight();
    int getWeight();

    virtual std::string Sound() = 0 ;
    virtual std::string Move() = 0;

    //default constructor
    Animal();
    //overloaded constructor
    Animal(int id, std::string name,int height,int weight,Date *animalBirth);
    Date* getDate();

    //copy constructor
    Animal(Animal const &obj);
    //destructor
    ~Animal();

    void toString();



    private:
        int id;
        std::string name;
        int height;
        int weight;
        Date *animalBirth;


};

#endif // ANIMAL_H
