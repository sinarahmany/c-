#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    std::cout << " Enter a Text or Numbers " << std::endl;
    std::cin >> a ;
    //std::cout << a.length() << std::endl;
        for (int i=0;i<a.length()+1;i++){
            for (int j=0;j<i;j++){
                std::cout << "\t1" ;
                std::cout << a[j];

            }
            std::cout << " " << std::endl;

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
