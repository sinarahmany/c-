#ifndef ANIMAL_H
#define ANIMAL_H
#include <string.h>
#include <iostream>

class Animal
{
    public:
        //default constructor
        Animal();
        //overloaded constructor
        Animal(int id ,std::string name,int height,int weight);
        //copy constructor
        Animal(Animal const &obj);
        //destructor
        ~Animal();
        //setter
        void setId(int id);
        void setName(std::string name);
        void setHeight(int height);
        void setWeight(int weight);

        //getter
        int getId();
        std::string getName();
        int getHeight();
        int getWeight();
        //methods
        void move();
        void sound();



    private:
        int id;
        string name;
        int height;
        int weight;


};

#endif // ANIMAL_H
