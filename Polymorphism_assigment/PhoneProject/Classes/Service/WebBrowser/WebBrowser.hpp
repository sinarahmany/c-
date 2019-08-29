//
//  WebBrowser.hpp
//  PhoneProject
//
//  Created by Saygin Guven on 2019-08-22.
//

#ifndef WebBrowser_hpp
#define WebBrowser_hpp

#include <stdio.h>
#include "../Service.hpp"


class WebBrowser : public Service{

private:

protected:

public:
    virtual std::string Can() override;
    virtual std::string ServiceName() override;
    virtual std::string ProviderProperty()override;
    virtual bool UseKeyboard()override;
    std::string Open(std::string Url);
    std::string Cashe();
    std::string OpenNewTab();


};

#endif /* WebBrowser_hpp */
