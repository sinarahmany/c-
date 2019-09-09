#include <iostream>
#include <string>


using namespace std;
void caculate(double km ,double liters){
        if(liters == 0 ){
            throw 0 ;
        }
        if(km <0 ){
            throw "kilometers can not be negative ";
        }
        cout<<"your fuel consumption is " <<100*(liters/km) << "Lt/ per 100km " <<endl;
    }


        // function3 throws runtime error
    void function3() {
    cout << "In function 3" << endl;
    // no try block, stack unwinding occurs, return control to function2
    throw runtime_error{"runtime_error in function3"}; // no print
    }
    // function2 invokes function3
    void function2() {
    cout << "function3 is called inside function2" << endl;
    function3(); // stack unwinding occurs, return control to function1
    }
    // function1 invokes function2
    void function1() {
    cout << "function2 is called inside function1" << endl;
    function2(); // stack unwinding occurs, return control to main
    }
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



//    try{
//        caculate(1000,0);
//        caculate(500,10);
//    }
//    catch(int &ex){
//        cout <<"fuel consumption can not be 0!"<<endl;
//    }
//    try{
//        caculate(-100,6);
//    }
//    catch(string &ex){
//        cout<<"string error"<<endl;
//    }
    //************************************************************************
    // invoke function1
    try {
        cout << "function1 is called inside main" << endl;
        function1(); // call function1 which throws runtime_error
    }
    catch (const runtime_error& error) { // handle runtime error
        cout << "Exception occurred: "<<  error.what() << endl;
        cout << "Exception handled in main" << endl;

    }




}
