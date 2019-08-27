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
    return 0;
}
