// 15-03-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    int x,y,i=0;
    
    scanf("%d",&x);
    scanf("%d",&y);
    
    if(x!=y)
    {
        if(y%2==0)
            y=y-1;
            
        y=y+2;
        while(y<x)
        {
            i=i+y;
            y=y+2;
        }
    }
    printf("%d\n",i);
    
    return 0;
}
