// 09-03-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    int n,x,i,cont,p;
    
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        p=0;
        scanf("%d",&x);
        for(cont=1;cont<=x;cont++)
        {
            if(x%cont==0)
                p++;
        }
        if(p==2)
            printf("%d eh primo\n",x);
            
        else
            printf("%d nao eh primo\n",x);
    }
 
    return 0;
}
