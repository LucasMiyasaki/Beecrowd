// 09-03-2022

#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
 
    int n,i,num;
    
    num=1;
    
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        printf("%d %d %d\n",num,(num*num),(num*num*num));
        num++;
    }
 
    return 0;
}
