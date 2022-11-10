// 13-04-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    int n,i;
    float x,y;
    
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        scanf("%f%f",&x,&y);
        if(y==0)
            printf("divisao impossivel\n");
        else
            printf("%.1f\n",x/y);
    }
 
    return 0;
}
