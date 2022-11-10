// 09-03-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    int n,i,num;
    
    num=1;
    
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        printf("%d ",num);
        num++;
        printf("%d ",num);
        num++;
        printf("%d ",num);
        num++;
        printf("PUM\n");
        num++;
    }
 
    return 0;
}
