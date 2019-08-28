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
    return Complex(obj.real*this->real,obj.imaginary*this->imaginary);
}
//plus operator
Complex Complex::operator +(const Complex obj){
    return Complex(obj.real+this->real,obj.imaginary+this->imaginary);
}
//minus operator
Complex Complex::operator +(const Complex obj){
    return Complex(obj.real-this->real,obj.imaginary-this->imaginary);
}
//comparing operator
Complex Complex::operator +(const Complex obj){
    return Complex(obj.real-this->real,obj.imaginary-this->imaginary);
}
//Destractor
Complex::~Complex(){};
