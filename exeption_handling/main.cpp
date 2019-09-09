#include <iostream>

using namespace std;

int main()
{
    double a,b;

    try{
        cout<<"give me 2 numbers"<<endl;
        cin>>a>>b;
        if(b==0){
            throw  logic_error("-> you can not divide by zero");
        }
    }
    catch(exception& ex){
        //1-if we put ... in the catch() it will  show a general message like you can say call us in case bla happend
        //2-if we put ex.what() it will show the massege in logic_error("you can ..."),other wise it will only show the cout below "Error"
        cout<<"Error"<<ex.what()<<endl;

    }

    cout<< "a / b = "<< a/b << endl;
}
