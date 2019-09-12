#include <iostream>

using namespace std;
class Node{
    private:
        int data;
        Node * right;
        Node * left;
    public:
        Node(int val){
        data = val;
        Node->right = nullptr;
        Node->left  = nullptr;
    }
};
int main()
{
    Node  *newNode = new Node(3);

}
