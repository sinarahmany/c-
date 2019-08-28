#include <iostream>
#include <string.h>
#include <functional>
#include <vector>
#include <math.h>

using namespace std;

class rectangle{
private:
    double lenght;
    double width;
public :
    rectangle (): lenght{0},width{0}{
    }
};


string  sayBomdia(){
    return "Bom Dia!!!!!" ;
}
string saysobbekhyr(){
    return "Sob Bekheyr";
}

void sayGoodMorning(string name ,function<string()> func){
    cout<<name <<" "<<func()<<endl;

}

void ForEachFunction(std::vector<int>& numbers, std::function<void(int)> func){

    for(int number : numbers){
        func(number);
    }

}


}



int main()
{
    sayGoodMorning("Sina",sayBomdia);
    sayGoodMorning("Taylor",saysobbekhyr);

    //Lambda c++ way
    function <void()> TheNameOfTheFunction = [] () {
        cout <<"this is how we create a Lambda expression c++ way" <<endl ;
    };
    TheNameOfTheFunction();

    cout<<"***************************************"<<endl;
    auto autoLambda= [](){
        cout <<"I`m an auto Lambda c++ way"<<endl;
    };
    autoLambda();

    cout<<"***************************************"<<endl;
    //c way to create lambda
   void(*cwayLambda) () = [](){
        cout << "this is how we create a Lambda expression c way" <<endl;
    };
    cwayLambda();
    cout<<"********************************************"<<endl;


    std::vector<int> numbers = {1,2,3,4,5,6,7,8,9,10};

    //if you want to
    int passByReference {0};
    int passByValue {0};
//    ForEachFunction(numbers,[&passByReference, passByValue](int number) mutable{
//        passByValue += 1;
//        std::cout << "size of this vector is " << passByValue << std::endl;
//        std::cout << "Value : " << passByReference << " " <<number << std::endl;
//        passByReference +=1;
//    });



    //challange

    //create a rectangle class
    // has lenght and width
    //create a foreach function with the same way we have created in the class
    // this function will have 2 parameters 1- vector or rectangles, 2-anonymous function
    // print the area of each rectangle







}
