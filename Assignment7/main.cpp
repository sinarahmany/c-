#include <iostream>
#include "complex.h"
#include <functional>
using namespace std;

int main()
{
    Complex reallycomplex(6,2) ;
    Complex notthatmuch(5,3);
    Complex multi = notthatmuch + reallycomplex;
    cout<<"("<<reallycomplex.getReal()<<","<<reallycomplex.getImaginary()<<"i) + ("
    <<notthatmuch.getReal()<<","<<notthatmuch.getImaginary()<<"i) =  "<<multi.getReal()<<","<<multi.getImaginary()<<"i"<<endl;

    Complex Plus = notthatmuch * reallycomplex;
    cout<<"("<<reallycomplex.getReal()<<","<<reallycomplex.getImaginary()<<"i) * ("
    <<notthatmuch.getReal()<<","<<notthatmuch.getImaginary()<<"i) =  "<<Plus.getReal()<<","<<Plus.getImaginary()<<"i"<<endl;

}
