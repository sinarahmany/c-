#include <iostream>

using namespace std;
class A{
public :
    A(){cout<<"A is born"<<endl;}
    virtual ~A(){cout<<"A is dead"<<endl;}
};
class B: public A{
public :
    bool eatMeat;
    B(){cout<<"B is born"<<endl;}
    ~B(){cout<<"B is dead"<<endl;}
};
class C: public A{
public :
    bool isWild;
    C(){cout<<"C is born"<<endl;}
    ~C(){cout<<"C is dead"<<endl;}
};
int main()
{
    A a;
    B b;
    C c;
    A *aptr =new B();
    A* arr[2] = {new B(), new C()};//polymorphic design

    dynamic_cast<B*>(arr[0])->eatMeat = false;
    return 0;
}
