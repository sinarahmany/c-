#include <iostream>
#include <string>
#include <vector>
#include <ctype.h>
#include <Cat.h>


int main() {

    if(1==1){
        //default constructor will be called
        Cat delegatedCat{};
        delegatedCat.introduceYourself();
        delegatedCat.jump();

    }

    std::cout << "_____________" << std::endl;
    Cat fluffy("Fluffy", "Black and white", false, 10.4, 100);
    fluffy.introduceYourself();
    fluffy.eat();


    std::cout << "_____________" << std::endl;
    //C++11 syntax
    Cat sylvester {"Sylvester","White",true, 5.4,95};
    sylvester.introduceYourself();
    sylvester.sleep();
    std::cout << "there are " << Cat::count << " cats" << std::endl;
    std::cout << "_____________" << std::endl;
    Cat kit{"Homer", 100 };
    kit.introduceYourself();
    kit.eat();
    kit.jump();
    std::cout << "there are " << Cat::count << " cats" << std::endl;
    std::cout << "_____________" << std::endl;
    Cat copyFluffy(fluffy);
    copyFluffy.introduceYourself();


    std::cout << "_____________" << std::endl;

    return 0;
}
