// 13-04-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    int x,y;
    
    scanf("%d%d",&x,&y);
    while(x!=y)
    {
        if(x>y)
            printf("Decrescente\n");
        else
            printf("Crescente\n");
        scanf("%d%d",&x,&y);
    }
 
    return 0;
}
