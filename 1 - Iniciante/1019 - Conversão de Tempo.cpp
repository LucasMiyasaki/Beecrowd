// 23-02-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    int h,m,s,n,r1;
    
    scanf("%d",&n);
    
    h=n/3600;
    r1=n%3600;
    
    m=r1/60;
    s=r1%60;
    
    printf("%d:%d:%d\n",h,m,s);
 
    return 0;
}
