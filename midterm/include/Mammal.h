#ifndef MAMMAL_H
#define MAMMAL_H


class Mammal : public Animal
{
    public:
        bool eatMeat;
        //default constructor
        Mammal();
        //overloaded constructor
        Mammal(bool eatMeat, int id ,std::string name,int height,int weight);
        //copy constructor
        Mammal(Mammal const &obj);
        //destructor
        ~Mammal();
        //setter
        void seteatMeat(bool eatMeat);
        //getters
        bool geteatMeat();


    protected:

    private:
};

#endif // MAMMAL_H
