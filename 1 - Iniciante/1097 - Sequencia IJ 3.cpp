// 12-04-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    int i,j,n=5;
    
    for(i=1;i<=9;i=i+2)
    {
        for(j=n+2;j>=n;j=j-1)
        {
            printf("I=%d J=%d\n",i,j);
        }
        n=n+2;
    }
 
    return 0;
}
