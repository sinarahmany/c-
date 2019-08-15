
#include "Employee.hpp"


Employee::Employee():
Employee{"unknown", new Time(11,39,"AM")}{

}

Employee::Employee(std::string name, Time *time){
    this->name = name;
    this->time = time;
}

Time* Employee::getTime(){
    return time;
}

void Employee::setTime(Time *time){
    this->time = time;
}
