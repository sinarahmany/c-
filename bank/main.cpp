
#include "functions.hpp"
#include "moreFunctions.hpp"
#include "OOP/Time.hpp"
#include "OOP/Employee.hpp"
#include "OOP/Account/Account.hpp"
#include "OOP/Person/Person.hpp"

int main() {

    Person *myPerson = new Person{"saygin","guven","sayginguven@gmail.com","604 700 43 42", "Vancouver", 105};

    Account myAccount (1,{1,2,3},{100,250,500},505,new Person());




    return 0;
}
