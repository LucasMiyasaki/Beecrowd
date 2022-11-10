// 09-03-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    int n,i,x;
    
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
    
        if(x==0)
            printf("NULL\n");
            
        if(x%2==0 && x>0)
            printf("EVEN POSITIVE\n");
            
        if(x%2==0 && x<0)
            printf("EVEN NEGATIVE\n");
            
        if(x%2!=0 && x>0)
            printf("ODD POSITIVE\n");
            
        if(x%2!=0 && x<0)
            printf("ODD NEGATIVE\n");
    }    

    
    
    return 0;
}
