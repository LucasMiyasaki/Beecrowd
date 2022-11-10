// 04-03-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    int n1,n2,n3,n4,n5,r1,r2,r3,r4,r5,i;
    
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    scanf("%d",&n4);
    scanf("%d",&n5);
    
    r1=n1%2;
    r2=n2%2;
    r3=n3%2;
    r4=n4%2;
    r5=n5%2;
    
    if(r1==0)
        i=i+1;
        
    if(r2==0)
        i=i+1;
        
    if(r3==0)
        i=i+1;
        
    if(r4==0)
        i=i+1;
        
    if(r5==0)
        i=i+1;
        
    printf("%d valores pares\n",i);
    
 
    return 0;
}
