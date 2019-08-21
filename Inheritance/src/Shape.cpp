#include "Shape.h"

//abstract class
class Shape{
public:
    //pure virtual
    //it means you have to initialize in your child class
    virtual void draw() = 0;
    virtual ~Shape(){};
};

class Circle : public Shape{
    virtual void draw() override{
        std::cout << "I am drawing a circle" << std::endl;
    }
    virtual ~Circle(){};
};

class Rectangle : public Shape{
    virtual void draw() override{
        std::cout << "I am drawing a rectangle" << std::endl;
    }
    virtual ~Rectangle(){};
};

class Triangle : public Shape{
    virtual void draw() override{
        std::cout << "I am drawing a triangle" << std::endl;
    }
    virtual ~Triangle(){};
};
