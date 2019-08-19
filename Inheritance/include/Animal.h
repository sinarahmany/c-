#ifndef ANIMAL_H
#define ANIMAL_H


class Animal
{
    public:
        virtual void sound();
        void setLegs(int Legs);
        int getLegs();
        void setTail(bool Tail);
        bool getTail();

    private:
        int Legs;
        bool Tail;
};

#endif // ANIMAL_H
