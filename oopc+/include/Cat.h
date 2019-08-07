#ifndef CAT_H
#define CAT_H
#include <stdio.h>
#include <iostream>
#include <string>


//this is called interface
class Cat{

    private :
       //properties
       //there is no direct access to the private members
       //you can access via getter and setters
       //this is encapsulation

        std::string name;
        std::string color;
        bool single;
        double weight;
        int health;

    public :
        //default constructor
        Cat();
        //overloaded constructor
        Cat(std::string name, int health);
        Cat(std::string name, std::string color, bool single,
            double weight, int health);

        //copy constructor
        Cat(const Cat &obj);

        //destructor
        ~Cat();

        //setters
        void setName(std::string name);
        void setColor(std::string color);
        void setSingle(bool single);
        void setWeight(double weight);
        void setHealth(int health);

        //getters
        std::string getName();
        std::string getColor();
        bool getSingle();
        double getWeight();
        int getHealth();

        //functions, methods
        void jump();
        void sleep();
        void eat();
        void introduceYourself();

};


#endif // CAT_H
