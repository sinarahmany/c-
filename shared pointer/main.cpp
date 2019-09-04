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
    IceCream(string flavor){
    this->flavor = flavor;
    cout<<"icecream is created with "<< this->flavor<<endl;

    }
    string getFlavor(){
        return this->flavor;
    }
    string setFlavor(string flavor){
        this->flavor = flavor;
    }
    ~IceCream(){
        cout<<"IceCream "<<this->flavor<<" has eaten!! "<<endl;
    }

};
int main()
{   //these 3 are all the same
    //unique_ptr<IceCream> icecream{new IceCream()};
    //unique_ptr<IceCream> icecream=make_unique<IceCream>();
    auto icecream=make_unique<IceCream>();//recommended
    auto icecream2=make_unique<IceCream>("cookie and cream");
    icecream2= move(icecream);


//    cout<<"memory location of my object is :" <<icecream.get()<<endl;
//    icecream->setFlavor("chocolate");
//    cout<<"the flavor changed to "<<icecream->getFlavor() <<endl;
//
//    icecream.reset();//delete the unique pointer
//
    cout<<"---------------\n";




}
