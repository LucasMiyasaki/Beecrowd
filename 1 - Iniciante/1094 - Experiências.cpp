// 16-03-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    int n,q,i,c=0,r=0,s=0,total=0;
    char tipo;
    float pc,pr,ps;
    
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        fflush(stdin);
        scanf("%d %c",&q,&tipo);
        if(tipo=='C')
        {
            total=total+q;
            c=c+q;
        }
        if(tipo=='R')
        {
            total=total+q;
            r=r+q;
        }
        if(tipo=='S')
        {
            total=total+q;
            s=s+q;
        }
    }
    pc=(float)c/(c+r+s)*100;
    pr=(float)r/(c+r+s)*100;
    ps=(float)s/(c+r+s)*100;
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    printf("Percentual de coelhos: %.2f %\n",pc);
    printf("Percentual de ratos: %.2f %\n",pr);
    printf("Percentual de sapos: %.2f %\n",ps);
    
    return 0;
}
