#ifndef ENGINE_H
#define ENGINE_H
#include <iostream>
#include <string>

using namespace std;

class Engine
{
    public:
        //default constructor
        Engine();
        //overloaded constructor
        Engine(int Cylinder,int HorsePower,string Engine_Type);
        //getters and setters
        string getEngine_Type();
        void setEngine_Type (string Engine_Type);
        int getCylinder();
        void setCylinder (int Cylinder);
        int getHorsePower();
        void setHorsePower (int HorsePower);
        //virtual added before functions so that we can override them
        virtual void showEngineType()=0;
        virtual void showCylinders()=0;
        virtual void showHP()=0;
        //destractor
        ~Engine();

    protected:

    private:
        string Engine_Type;
        int Cylinder;
        int HorsePower;
};

#endif // ENGINE_H
