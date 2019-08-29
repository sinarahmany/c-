#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <functional>


class Complex
{
    public:
        Complex() : real{0} ,imaginary {0}{}
        Complex (int real , int imaginary) : real{real} ,imaginary{imaginary} {
        }
        Complex (const Complex &copyObj);

        int getReal();
        void setReal(int real);
        int getImaginary();
        void setImaginary(int imaginary);

        Complex operator *(const Complex obj);
        Complex operator + (const Complex obj);
        Complex operator - (const Complex obj);
        Complex operator == (const Complex obj);
        Complex operator != (const Complex obj);
        Complex operator = (const Complex obj);
        Complex operator ++ ();
        Complex operator >> ();
        Complex& operator -- ();
        Complex operator -- (int);
        ~Complex();

    private:
        int real;
        int imaginary;
};

#endif // COMPLEX_H
