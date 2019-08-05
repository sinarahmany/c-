#ifndef CAT_H
#define CAT_H
#include <iostream>
#include <string>


class cat
{
    public:
        std::string name;
        std::string color;
        bool single;
        double weight;
        int health;

    //incase the function don`t mixed up with the other functions from interface we put cat:: before function
        void jump();

        void sleep(){
            std::cout <<"i`m sleeping call me later." << std::endl;
        }
        void eat(){
            std::cout << "Hmmmm i like tuna" << std::endl;
        }
};

#endif // CAT_H
