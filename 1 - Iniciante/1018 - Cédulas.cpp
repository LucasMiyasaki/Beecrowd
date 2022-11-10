// 23-02-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    int n,a,b,c,d,e,f,g,resto1,resto2,resto3,resto4,resto5,resto6;
    
    scanf("%d",&n);
    
    a=n/100;
    resto1=n%100;
    
    b=resto1/50;
    resto2=resto1%50;
    
    c=resto2/20;
    resto3=resto2%20;
    
    d=resto3/10;
    resto4=resto3%50;
    
    e=resto4/5;
    resto5=resto4%5;
    
    f=resto5/2;
    resto6=resto5%2;
    
    g=resto6/1;
    
    printf("%d\n",n);
    printf("%d nota(s) de R$ 100,00\n",a);
    printf("%d nota(s) de R$ 50,00\n",b);
    printf("%d nota(s) de R$ 20,00\n",c);
    printf("%d nota(s) de R$ 10,00\n",d);
    printf("%d nota(s) de R$ 5,00\n",e);
    printf("%d nota(s) de R$ 2,00\n",f);
    printf("%d nota(s) de R$ 1,00\n",g);
    
    return 0;
}
