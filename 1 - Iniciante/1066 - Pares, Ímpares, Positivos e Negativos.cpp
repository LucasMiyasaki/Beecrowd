// 08-03-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    int n1,n2,n3,n4,n5,resto,p,i,po,n;
    
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    scanf("%d",&n4);
    scanf("%d",&n5);
    
    p=0;
    i=0;
    po=0;
    n=0;
    
    resto=n1%2;
    if(resto==0)
        p=p+1;
        
    else
        i=i+1;
        
    if(n1>0)
        po=po+1;
        
    if(n1<0)
        n=n+1;
        
    resto=n2%2;
    if(resto==0)
        p=p+1;
        
    else
        i=i+1;
        
    if(n2>0)
        po=po+1;
        
    if(n2<0)
        n=n+1;
        
    resto=n3%2;
    if(resto==0)
        p=p+1;
        
    else
        i=i+1;
        
    if(n3>0)
        po=po+1;
        
    if(n3<0)
        n=n+1;
        
    resto=n4%2;
    if(resto==0)
        p=p+1;
        
    else
        i=i+1;
        
    if(n4>0)
        po=po+1;
        
    if(n4<0)
        n=n+1;
        
    resto=n5%2;
    if(resto==0)
        p=p+1;
        
    else
        i=i+1;
        
    if(n5>0)
        po=po+1;
        
    if(n5<0)
        n=n+1;
        
    printf("%d valor(es) par(es)\n",p);
    printf("%d valor(es) impar(es)\n",i);
    printf("%d valor(es) positivo(s)\n",po);
    printf("%d valor(es) negativo(s)\n",n);
    
 
    return 0;
}
