// 15-03-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    int n,x;
    
    scanf("%d",&n);
    
    for(x=1;x<=10000;x++)
    {
        if(x%n==2)
            printf("%d\n",x);
    }
    
    return 0;
}
