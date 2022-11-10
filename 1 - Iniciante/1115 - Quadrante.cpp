// 09-03-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    int x,y,i;
    
    for(i=1;x!=0 || y!=0;i++)
    {
        scanf("%d%d",&x,&y);
        if(x>0 && y>0)
            printf("primeiro\n");
        
        if(x>0 && y<0)
            printf("quarto\n");
        
        if(x<0 && y>0)
            printf("segundo\n");
        
        if(x<0 && y<0)
            printf("terceiro\n");
        
    }
 
    return 0;
}
