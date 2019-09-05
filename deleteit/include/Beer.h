#ifndef BEER_H
#define BEER_H
#include <iostream>

template<typename T>
class Beer
{
    public:
        Beer(){
        std::cout<<"Beer is ready to serve"<<std::endl;
        }
        Beer(T source){
            this->source = source;
        }
        T getSource(){
            return source;
        }

        ~Beer(){
            std::cout<<"Beer is empty"<<std::endl;
        }

    private:
        T source;
};

#endif // BEER_H
