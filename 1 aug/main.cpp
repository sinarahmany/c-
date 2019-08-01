#include <iostream>

using namespace std;
int add (int a,int b){
    return a+b; }
int modify(int a,int &b,int &c ){
a+=1;
b+=2;
c+=3;
return a+b+c;
}

int main()
{
    int x = 5;
    int y = 4;
   // std::cout << add(x,y) <<std::endl;

    int i,j,k;
    i=5 ; //this will be pass by value
    j=4 ; //this will be pass by ref
    k=2 ;
    //pass bt reference will check the address in the RAM
    std::cout << modify(i,j,k) <<std:: endl;
    //the value of i is not modified with the pass by val function
    std::cout << "value of i is :" << i << std::endl;//4
    //the value of j is modified with the pass ny reference function
    std::cout << "value of j is : " << j << std::endl; //4

    return 0;
}
