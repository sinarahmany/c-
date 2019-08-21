#include <iostream>
#include <vector>

#include "Dog.h"
#include "Shape.h"
using namespace std;



class Circle : public Shape{
    void draw () override {
        cout<< "i am drwaing a circle"<<endl;
    }
};

class Rectangle : public Shape{
    void draw () override {
        cout<< "i am drwaing a Rectangle"<<endl;
    }
};
//base
class Animal{
public:
    virtual void sound(){
        std::cout << " I can not make sound since I dont know what kind of animal I am" << std::endl;
    }
    virtual ~Animal(){};
};
//inherited class, derived class
class Mouse : public Animal{
public:
    virtual void sound() override
    {
        std::cout << "squeak" << std::endl;
    }
    virtual ~Mouse(){};
};
//inherited class, derived class
class Bird : public Animal{
public:
    virtual void sound() override{
        std::cout << "tweet" << std::endl;
    }
    virtual ~Bird(){};
};
//inherited class , derived class
class Dog : public Animal{
public:
    virtual void sound() override{
        std::cout << "whooof" << std::endl;
    }
    virtual ~Dog(){};
};

int main()
{
    std::vector<Shape *>Shapes;
    Shapes.push_back(new Circle());

    for (auto Shape : Shapes){

        Shape->draw();
    }
    return 0;
}




