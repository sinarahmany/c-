#include <iostream>
#include <string>

using namespace std;
//sina
int main()
{
    //first we aks user to put some numbers or some words
    string a;
    std::cout << " Enter a Text or Numbers " << std::endl;
    std::cin >> a ;
    int i,j,k,l,n;
    //we assign the lenght of the user input to a new variable
    n= a.length();
    for(i=1;i<=n;i++)
    {
        //this for loop help to make it like a triangle by putting space
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        //this for loop print the array item from first to last one
        for(k=1;k<=i;k++)
        {
            cout<<a[k-1];
        }
        //this for loop is reverse of the upper for loop
        for(l=i-1;l>=1;l--)
        {
            cout<<a[l-1];
        }
        cout<<"\n";
    }


    return 0;
}

