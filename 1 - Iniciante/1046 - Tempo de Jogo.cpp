// 26-02-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    int a,b,t;
    
    scanf("%d%d",&a,&b);
    
    if(a==b)
        printf("O JOGO DUROU 24 HORA(S)\n");
        
    if(a<b)
    {
        t=b-a;
        printf("O JOGO DUROU %d HORA(S)\n",t);
    }
    
    if(a>b)
        {
            t=(24-a)+b;
            printf("O JOGO DUROU %d HORA(S)\n",t);
        }
        
 
    return 0;
}
