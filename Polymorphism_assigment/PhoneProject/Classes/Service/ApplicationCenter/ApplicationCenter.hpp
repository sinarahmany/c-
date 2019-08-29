//
//  ApplicationCenter.hpp
//  PhoneProject
//
//  Created by Saygin Guven on 2019-08-22.
//

#ifndef ApplicationCenter_hpp
#define ApplicationCenter_hpp

#include <stdio.h>
#include "../Service.hpp"
#include <string>

class ApplicationCenter : public Service{

private:

protected:

public:
    std::string DownloadApp(std::string appNmae);
    std::string DeleteApp(std::string appNmae);
    std::string OpenApp(std::string appNmae);
    virtual std::string Can() override;
    virtual std::string ServiceName() override;
    virtual std::string ProviderProperty()override;
    virtual bool UseKeyboard()override;

};

#endif /* ApplicationCenter_hpp */
