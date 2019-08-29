#include <iostream>
#include "complex.h"
#include <functional>
using namespace std;

int main()
{
    cout<<"------------Hey i`m Sina wellcome to my program----------------- \n"<<endl;

    Complex reallycomplex(1,-4) ;
    Complex notthatmuch(1,-4);
    //plus operator
    Complex multi = notthatmuch + reallycomplex;
    cout<<"("<<reallycomplex.getReal()<<","<<reallycomplex.getImaginary()<<"i) + ("
    <<notthatmuch.getReal()<<","<<notthatmuch.getImaginary()<<"i) =  "<<multi.getReal()<<","<<multi.getImaginary()<<"i"<<endl;

    Complex Plus = notthatmuch * reallycomplex;
    cout<<"("<<reallycomplex.getReal()<<","<<reallycomplex.getImaginary()<<"i) * ("
    <<notthatmuch.getReal()<<","<<notthatmuch.getImaginary()<<"i) =  "<<Plus.getReal()<<","<<Plus.getImaginary()<<"i"<<endl;
    //comparing operator
    Complex Compare = notthatmuch == reallycomplex;

    cout<<"("<<reallycomplex.getReal()<<","<<reallycomplex.getImaginary()<<"i) == ("
    <<notthatmuch.getReal()<<","<<notthatmuch.getImaginary()<<"i) ->  ";

    if(Compare.getReal()==1){
        cout<<"they are equal"<<endl;
    }
    else{
        cout<<"they are not equal"<<endl;
    }
    //++ operator
    Complex PLuslpUS = ++ notthatmuch ;

    cout<<"++ ("<<notthatmuch.getReal()<<","<<notthatmuch.getImaginary()<<"i) =  "<<PLuslpUS.getReal()<<","<<PLuslpUS.getImaginary()<<"i"<<endl;
    //operator -- (no matter if you put -- before or after the class it will work anyway!!!!!!!!!!!!)
    Complex Minusminus = notthatmuch--  ;

    cout<<"operator -- =  "<<Minusminus.getReal()<<","<<Minusminus.getImaginary()<<"i"<<endl;

    // -- operator
    Complex Minusminus2 = --notthatmuch  ;
    cout<<"-- operator =  "<<Minusminus2.getReal()<<","<<Minusminus2.getImaginary()<<"i"<<endl;

    //uncomparing operator
    Complex UnCompare = notthatmuch == reallycomplex;

    cout<<"("<<reallycomplex.getReal()<<","<<reallycomplex.getImaginary()<<"i) == ("
    <<notthatmuch.getReal()<<","<<notthatmuch.getImaginary()<<"i) ->  ";

    if(UnCompare.getReal()!=1){
        cout<<"!=false they are equal"<<endl;
    }
    else{
        cout<<"!=true they are not equal"<<endl;
    }
}
