#ifndef BIRD_H
#define BIRD_H
#include <string.h>
#include <iostream>
#include "Animal.h"
#include "../Date.hpp"


class Bird : public Animal
{
    public:
    void setId(int id);
    void setName(std::string name);
    void setHeight(int height);
    void setWeight(int weight);
    void setIsWild(bool isWild);

    int getId();
    std::string getName();
    int getHeight();
    int getWeight();
    bool getIsWild();

    virtual std::string Sound() override;
    virtual std::string Move()override;

    //default constructor
    Bird();
    //overloaded constructor
    Bird(int id, std::string name,int height,int weight,Date *animalBirth,bool isWild);
    //    Date* getDate();

    //copy constructor
    Bird(Bird const &obj);
    //destructor
    ~Bird();

    std::string toString();


    protected:

    private:
    int id;
    std::string name;
    int height;
    int weight;
    bool isWild;
    Date *animalBirth;
};

#endif // BIRD_H
