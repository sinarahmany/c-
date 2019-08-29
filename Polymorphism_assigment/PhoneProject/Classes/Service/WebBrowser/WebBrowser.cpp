//
//  WebBrowser.cpp
//  PhoneProject
//
//  Created by Saygin Guven on 2019-08-22.
//

#include "WebBrowser.hpp"


std::string WebBrowser::ServiceName(){
    return "HTTPClient";
}

std::string WebBrowser::Can(){
    return "can send and receive message";
}
std::string WebBrowser::ProviderProperty(){
    return "empty";
}
bool WebBrowser::UseKeyboard(){
    return true;
}

std::string WebBrowser::Open(std::string Url){
    return "Open Url";
}
std::string WebBrowser::Cashe(){
    return "Cashe";
}

std::string WebBrowser::OpenNewTab(){
    return "OpenNewTab";
}

