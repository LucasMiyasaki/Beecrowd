// 09-03-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    int n,i;
    
    scanf("%d",&n);
    
    if(n%2==0)
        for(i=1;i<=6;i++)
        {
            n++;
            printf("%d\n",n);
            n++;
        }
        
    else
        for(i=1;i<=6;i++)
        {
            printf("%d\n",n);
            n=n+2;
        }
    
    return 0;
}
