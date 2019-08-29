//
//  Calendar.hpp
//  PhoneProject
//
//  Created by Saygin Guven on 2019-08-22.
//

#ifndef Calendar_hpp
#define Calendar_hpp
#include <iostream>
#include <stdio.h>
#include "../Service.hpp"
#include <string>

//create properties
//getters and setters
//constructors (default, overloaded, copy)
//destructor
//methods
class Calendar : public Service{

private:

protected:

public:
    virtual std::string Can() override;
    virtual std::string ServiceName() override;
    virtual std::string ProviderProperty()override;
    virtual bool UseKeyboard()override;
    std::string NewEvent();
    std::string ModifyEvent();
    std::string DeleteEvent();

};
#endif /* Calendar_hpp */
