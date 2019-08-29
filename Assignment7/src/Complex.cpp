#include "Complex.h"

Complex::Complex (const Complex &copyObj){
    this->real = copyObj.real;
    this->imaginary = copyObj.imaginary;
}


int Complex::getReal(){ return real;}
void Complex::setReal(int real){this->real == real;}

int Complex::getImaginary(){ return imaginary;}
void Complex::setImaginary(int imaginary){this->imaginary = imaginary; }

//multiply opartor
Complex Complex::operator *(const Complex obj){
    return Complex((obj.real*this->real)-(obj.imaginary*this->imaginary),(obj.real*this->imaginary)+(this->real*obj.imaginary));
}
//plus operator
Complex Complex::operator +(const Complex obj){
    return Complex(obj.real+this->real,obj.imaginary+this->imaginary);
}
//minus operator
Complex Complex::operator -(const Complex obj){
    return Complex(obj.real-this->real,obj.imaginary-this->imaginary);
}
//comparing operator
Complex Complex::operator ==(const Complex obj){
    //return Complex(obj.real==this->real,obj.imaginary==this->imaginary);
    if(obj.real==this->real && obj.imaginary==this->imaginary){
    return Complex(1,1); }
}

//uncomparing operator
Complex Complex::operator!=(const Complex obj){
    if(obj.real==this->real && obj.imaginary==this->imaginary){
    return Complex(1,1); }
}
//++ operator
Complex Complex::operator ++(){
    return Complex(this->real+1,this->imaginary);
}
//-- operator
Complex& Complex::operator --(){
    this->real-=1;
    return *this;
}
//operator --
Complex Complex::operator --(int jj){
    jj = this->real-1;
    return Complex(jj,this->imaginary);
}


//= assigment
Complex Complex::operator =(const Complex obj){
    return Complex(this->real=obj.real,this->imaginary=obj.imaginary);
}
// >>cin
//++ operator
Complex Complex::operator >>(){
    cout<<"type your real number"<<endl;
    int jj;
    jj>>cin;
    cout<<"type your Imaginary number"<<endl;
    int ii;
    ii>>cin;
    return Complex(this->real=jj,this->imaginary=ii);
}

//Destractor
Complex::~Complex(){};
