#include "functions.h"

void AnimalTest(){
    Mouse mouse;
    Bird bird;
    Dog dog;

    //static binding
    std::cout << "static binding" << std::endl;
    mouse.sound();
    bird.sound();
    dog.sound();

    //dynamic binding
    std::cout << "dynamic binding" << std::endl;
    Animal * animals[3];
    animals[0] = &mouse;
    animals[1] = &bird;
    animals[2] = &dog;

    for (auto animal : animals){
        animal->sound();
    }

    std::cout << "sound function with pointers" << std::endl;

    Animal * animalptr[] = {new Mouse(), new Bird(), new Dog()};
    for (auto animal : animalptr){
        animal->sound();
        (*animal).sound();
    }
}

void ShapeTest(){
    std::vector<Shape *> shapes;
    shapes.push_back(new Circle());
    shapes.push_back(new Rectangle());
    shapes.push_back(new Triangle());

    for (auto shape : shapes ) {
        shape->draw();
    }
}
