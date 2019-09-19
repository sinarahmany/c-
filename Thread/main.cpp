#include <iostream>
#include <thread>

using namespace std;

void sayHello(){
    cout<<"Hello"<<endl;
}
void sayHi(){
    cout<<"Hi"<<endl;
}
int main()
{
    //when we say thread all the functions will start at the same time even the \n may become after or before hi and hello
    std::thread Thread1(sayHello);
    std::thread Thread2(sayHi);
    Thread1.join();
    Thread2.join();
}
