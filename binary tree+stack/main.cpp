#include <iostream>
#include <stack>
#include <queue>
#include <deque>
using namespace std;
//class Node{
//    private:
//        int data;
//        Node * right;
//        Node * left;
//    public:
//        Node(int val){
//        data = val;
//        Node->right = nullptr;
//        Node->left  = nullptr;
//    }
//};
template<typename T>
void printStack(stack<T> &stck){
    if(stck.empty()){
        cout<<"stack is empty" <<endl;
        return;
    }

    while( !stck.empty()){
        cout<<stck.top()<<" ";
        stck.pop();
        }
};

void hr(){
    cout<<"\n-----------------\n";
}

std::queue<string> bankQueue;
void PrintQueue(){
     if(bankQueue.empty()){
        cout<<"Queue is empty" <<endl;
        return;
    }

    while( !bankQueue.empty()){
        cout<<bankQueue.front()<<"-";
        bankQueue.pop();
        }

}


template<typename T>
void printDeque(deque<T> &que){
    if(que.empty()){
        cout<<"deque is empty" <<endl;
        return;
    }
    while( !que.empty()){
        cout<<que.back()<<" ";
        que.pop_back();
        }
};
int main()
{
    //Node  *newNode = new Node(3);
    std::stack<double> prices ;
    if(prices.empty()){
        cout<<"Stack is empty"<<endl;
    }
    prices.push(1.1);
    prices.push(1.2);
    prices.push(1.3);

    (prices.empty()) ? cout<<"Stack is empty" : cout<<prices.size()<<" items has been added to the Stack";

    hr();
    printStack(prices);
    hr();
    printStack(prices);


    cout<<"\n\n";


    bankQueue.push("Daniel");
    bankQueue.push("Mariana");
    bankQueue.push("Jose");
    bankQueue.push("hamed");
    bankQueue.push("kingsia");
    bankQueue.push("$ina");

    bankQueue.pop();
    cout<<bankQueue.front()<< endl;
    cout<<bankQueue.back()<< endl;
    hr();
    PrintQueue();
    hr();
    std::deque<int> employees ;
    employees.push_front(10);
    employees.push_back(9);
    employees.push_front(12);
    employees.push_front(21);
    employees.push_back(5);

    cout<<employees.at(1);
    hr();
    for(auto it = employees.begin() ; it <employees.end(); it++){
        cout<< *it << "  ";
    }
    hr();
    for(auto i=0 ; i<employees.size(); i++){
        cout<<employees[i]<<"  ";
    }
    hr();
    //Reverse with iterators
    for(auto it = employees.end()-1 ; it>=employees.begin(); it--){
        cout<< *it << "  ";
    }
    hr();
    //Print with for range loop
    for(auto i : employees){
        cout<< i << "  ";
    }
    hr();
    //While loop
    printDeque(employees);

}
