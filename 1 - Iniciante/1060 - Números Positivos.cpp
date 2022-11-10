// 03-03-2022

#include <iostream>
 
using namespace std;
 
int main() {

    float n1,n2,n3,n4,n5,n6;
    int i;
    
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    scanf("%f",&n4);
    scanf("%f",&n5);
    scanf("%f",&n6);
    
    
    i=0;
    
    if(n1>0)
        i=i+1;
    
    if(n2>0)
        i=i+1;
    
    if(n3>0)
        i=i+1;
    
    if(n4>0)
        i=i+1;
    
    if(n5>0)
        i=i+1;
    
    if(n6>0)
        i=i+1;
        
    printf("%d valores positivos\n",i);
    
 
    return 0;
}
