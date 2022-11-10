// 23-02-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    int n,a,m,d,r1,r2;
    
    scanf("%d",&n);
    
    a=n/365;
    r1=n%365;
    
    m=r1/30;
    d=r1%30;

    printf("%d ano(s)\n",a);
    printf("%d mes(es)\n",m);
    printf("%d dia(s)\n",d);
 
    return 0;
}
