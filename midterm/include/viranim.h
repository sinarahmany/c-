#ifndef VIRANIM_H
#define VIRANIM_H
#include <stdio.h>
#include <string>
#include <iostream>

class viranim
{
public:
    virtual int id() = 0 ;
    virtual std::string name() = 0;
    virtual int height() = 0;
    virtual int weight() = 0;
    virtual ~viranim(){};
};

#endif // VIRANIM_H
