// 15-03-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    int n,i,r;
    
    scanf("%d",&n);
    
    for(i=1;i<=10;i++)
    {
        r=n*i;
        printf("%d x %d = %d\n",i,n,r);
    }
 
    return 0;
}
