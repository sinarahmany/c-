#include <iostream>
#include <string>

using namespace std;

int main()
{

    string a;
    std::cout << " Enter a Text or Numbers " << std::endl;
    std::cin >> a ;
    //std::cout << a.length() << std::endl;
int i,j,k,l,n;
n= a.length();
for(i=1;i<=n;i++)
{
for(j=1;j<=n-i;j++)
{
cout<<" ";
}
for(k=1;k<=i;k++)
{
cout<<a[k-1];
}
for(l=i-1;l>=1;l--)
{
cout<<a[l-1];
}
cout<<"\n";
}


    return 0;
}
//multiN[i][j]=j*i;
//            if(i==0){
//                printf("%5d",j);
//            }
//            else if(j==0){
//                printf("%5d",i);
//            }
//            else{printf("%5d", multiN[i][j]);}
