#include <iostream>
#include <memory>

using namespace std;
class IceCream{
private :
    string flavor;
public :
    IceCream(){
    this->flavor= " Vanila ";
    cout<<"Icecream is created"<<this->flavor<<endl;
    }
    string getFlavor(){
        return this->flavor;
    }
    ~IceCream(){
        cout<<"IceCream has eaten!! "<<endl;
    }

};
int main()
{   //these 3 are all the same
    //unique_ptr<IceCream> icecream{new IceCream()};
    //unique_ptr<IceCream> icecream=make_unique<IceCream>();
    auto icecream=make_unique<IceCream>();//recommended

    int *a = new int(10);
    int *b = a;
    int *c = a;
    cout<<*c;
}
