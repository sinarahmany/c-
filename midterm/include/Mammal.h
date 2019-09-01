#ifndef MAMMAL_H
#define MAMMAL_H
#include <string.h>
#include <iostream>
#include "Animal.h"
#include "../Date.hpp"

class Mammal : public Animal
{
    public:
    void setId(int id);
    void setName(std::string name);
    void setHeight(int height);
    void setWeight(int weight);
    void setEatMeat(bool eatMeat);

    int getId();
    std::string getName();
    int getHeight();
    int getWeight();
    bool getEatMeat();

    virtual std::string Sound() override;
    virtual std::string Move()override;

    //default constructor
    Mammal();
    //overloaded constructor
    Mammal(int id, std::string name,int height,int weight,Date *animalBirth,bool eatMeat);
//    Date* getDate();

    //copy constructor
    Mammal(Mammal const &obj);
    //destructor
    ~Mammal();

    std::string toString();


    protected:

    private:
    int id;
    std::string name;
    int height;
    int weight;
    bool eatMeat;
    Date *animalBirth;
};

#endif // MAMMAL_H
