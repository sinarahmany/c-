
#include "functions.hpp"
#include "moreFunctions.hpp"
#include "OOP/Time.hpp"
#include "OOP/Employee.hpp"
#include "OOP/Account/Account.hpp"
#include "OOP/Person/Person.hpp"

int main() {

    Person *a = new Person{"saygin","guven","sayginguven@gmail.com","604 700 43 42", "Vancouver", 105};

    (*a).toString();
    a->toString();


    return 0;
}
