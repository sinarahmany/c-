#include <iostream>
#include "../Functions.h"

using namespace std;

int main()
{
    strColor("Welecome to Transaction composition Assignment!\n",11,1);

    //Drive the Transaction Class
    strColor("Drive the Transaction Class\n\n",11,1);

    strColor("Creating myTransaction and initializing by default constructor.\n",13,1);
    Transaction *myTransaction = new Transaction();
    myTransaction->print(); cout<<std::endl<<std::endl;

    strColor("a new transaction calling.\n",13,1);
    myTransaction->setTransaction(82000,"Checking",new SimpleTime(1,58,0,"+07:00"),new SimpleDate(8,29,2019,"Thursday"));
    cout<<std::endl<<std::endl;

    strColor("Creating oTransaction and initializing by copy constructor.\n",13,1);
    Transaction *oTransaction = new Transaction(*myTransaction);
    myTransaction->print(); cout<<std::endl<<std::endl;

    strColor("If time initialized wrong:",13,1);
    myTransaction->setTime(7,77,50,"+07:00");cout<<std::endl<<std::endl;

    strColor("If date initialized wrong:",13,1);
    myTransaction->setDate(7,77,50,"+Saturday");cout<<std::endl<<std::endl;

    strColor("If amount initialized wrong:",13,1);
    myTransaction->setAmount(-10);cout<<std::endl;

    strColor("If account type initialized wrong:",13,1);
    myTransaction->setAccountType("Something");cout<<std::endl;

    oTransaction->setAmount(67000);
    oTransaction->setAccountType("Saving");
    oTransaction->setTime(16,0,1,"+07:00");
    oTransaction->setDate(8,30,2020,"Monday");
    oTransaction->print(); cout<<std::endl<<std::endl;

}
