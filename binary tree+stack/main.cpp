#include <iostream>
#include <stack>
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

    (prices.empty()) ? cout<<"Stack is empty"<<endl : cout<<prices.size()<<" items has been added to the Stack"<<endl;

}
