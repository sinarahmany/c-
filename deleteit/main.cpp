#include <iostream>

using namespace std;
template<typename T>
void printThis(T a){
    cout<<"You typed "<<a<<endl;

}

int main()
{
    printThis(10);
    printThis(2.75);
    printThis("Hello");

}
