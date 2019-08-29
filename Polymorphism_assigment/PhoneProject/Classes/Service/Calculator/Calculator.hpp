//
//  Calculator.hpp
//  PhoneProject
//
//  Created by Saygin Guven on 2019-08-22.
//

#ifndef Calculator_hpp
#define Calculator_hpp
#include <iostream>
#include <stdio.h>
#include "../Service.hpp"
#include <string>

//create properties
//getters and setters
//constructors (default, overloaded, copy)
//destructor
//methods
class Calculator : public Service{

private:

protected:

public:
    public:
    virtual std::string Can() override;
    virtual std::string ServiceName() override;
    virtual std::string ProviderProperty()override;
    virtual bool UseKeyboard()override;
    double Add(double a , double b);
    double Subtract(double a , double b);
    double Multiply(double a , double b);
    double Divide(double a , double b);
};

#endif /* Calculator_hpp */
