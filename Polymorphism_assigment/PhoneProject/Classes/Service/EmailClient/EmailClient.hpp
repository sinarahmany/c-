//
//  EmailClient.hpp
//  PhoneProject
//
//  Created by Saygin Guven on 2019-08-22.
//

#ifndef EmailClient_hpp
#define EmailClient_hpp
#include <string>
#include <stdio.h>
#include "../Service.hpp"
#include <iostream>

//create properties
//getters and setters
//constructors (default, overloaded, copy)
//destructor
//methods
class EmailClient :public Service{

private:

protected:

public:
    virtual std::string Can() override;
    virtual std::string ServiceName() override;
    virtual std::string ProviderProperty()override;
    virtual bool UseKeyboard()override;
    bool Send();
    bool Receive();
    bool Reply();
    bool Forward();

};
#endif /* EmailClient_hpp */
