#include <iostream>
#include <string.h>
#include <functional>

using namespace std;

string  sayBomdia(){
    return "Bom Dia!!!!!" ;
}
string saysobbekhyr(){
    return "Sob Bekheyr";
}

void sayGoodMorning(string name ,function<string()> func){
    cout<<name <<" "<<func()<<endl;

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




}
