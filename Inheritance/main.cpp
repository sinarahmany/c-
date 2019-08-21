#include <iostream>
#include <vector>
#include "Animal.h"
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


int main()
{
    std::vector<Shape *>Shapes;
    Shapes.push_back(new Circle());

    for (auto Shape : Shapes){

        Shape->draw();
    }
    return 0;
}




