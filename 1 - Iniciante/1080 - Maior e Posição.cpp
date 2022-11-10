// 16-03-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    int n,maior=0,posicao=0,i;
    
    for(i=1;i<=100;i++)
    {
        scanf("%d",&n);
        if(n>maior)
        {
            posicao=i;
            maior=n;
        }
    }
    printf("%d\n%d\n",maior,posicao);
 
    return 0;
}
