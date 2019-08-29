//
//  Gmail.hpp
//  PhoneProject
//
//  Created by Saygin Guven on 2019-08-22.
//

#ifndef Gmail_hpp
#define Gmail_hpp

#include <stdio.h>
#include <iostream>
#include "../EmailClient.hpp"
#include <string>



class Gmail : public EmailClient{

private:

protected:

public:
    void test(){std::cout <<"gmail test";}
    virtual std::string Can() override;
    virtual std::string ServiceName() override;
    virtual std::string ProviderProperty()override;
    virtual bool UseKeyboard()override;
    bool SignIn(std::string email);
    bool SignOut();
};

#endif /* Gmail_hpp */
