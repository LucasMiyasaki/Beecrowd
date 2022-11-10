// 25-02-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    int a,b;
    double p,total;
    
    scanf("%d%d",&a,&b);
    
    if(a==1)
    p=4;
    
    if(a==2)
    p=4.5;
    
    if(a==3)
    p=5;
    
    if(a==4)
    p=2;
    
    if(a==5)
    p=1.5;
    
    total=p*b;
    
    printf("Total: R$ %.2lf\n",total);
 
    return 0;
}
