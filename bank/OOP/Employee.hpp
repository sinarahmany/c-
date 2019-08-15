
#ifndef Employee_hpp
#define Employee_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "Time.hpp"

class Employee{

private:
    std::string name;
    Time *time;

public:

    Employee();
    Employee(std::string name, Time *time);
    Time* getTime();
    void setTime(Time *time);
};



#endif /* Employee_hpp */
