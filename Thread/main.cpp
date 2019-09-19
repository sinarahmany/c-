#include <iostream>
#include <thread>

using namespace std;

void sayHello(){
    cout<<"Hello"<<endl;
}
void sayHi(){
    cout<<"Hi"<<endl;
}
void sayNumber(int value){
    cout<<value<<endl;
}
int main()
{
    cout<<"The main Thread ID is :"<<std::this_thread::get_id()<<endl;
    /*when we say thread all the functions will start at the same time even the \n
    may become after or before hi and hello*/
    std::thread Thread1(sayHello);
    std::thread Thread2(sayHi);
    std::thread Thread3(sayNumber,22);//instead of std::thread Thread3(sayNumber(22))
    Thread1.join();
    Thread2.join();
    Thread3.join();

    std::thread Thread4([](){
        for(int i = 0 ; i<10 ; i++){
            std::cout<<i<<" ";
        }
    });
    Thread4.join();
    cout<<"\nfunction 5 started "<<endl;
    std::thread Thread5([](){
        for(int i = 65 ; i<91 ; i++){//to show alphabet it should start from 65 to 90
            std::this_thread::sleep_for(std::chrono::milliseconds(i*6));
            std::cout<<char(i)<<" ";
        }
    });
    Thread5.join();
}
