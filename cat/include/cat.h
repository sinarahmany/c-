#ifndef CAT_H
#define CAT_H


class cat
{
    std::string name;
    std::string color;
    bool single;
    double weight;
    int health;


    void jump(){
    std::cout << "i jumped like a crazy Cat!!" << std::endl;
    }

    void sleep(){
    std::cout <<"i`m sleeping call me later." << std::endl;
    }
    void eat(){
    std::cout << "Hmmmm i like tuna" << std::endl;
    }
};

#endif // CAT_H
