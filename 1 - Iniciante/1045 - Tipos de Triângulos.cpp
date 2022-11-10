// 26-02-2022

#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
 
    double a,b,c,l1,l2,l3;
    
    scanf("%lf%lf%lf",&a,&b,&c);

    if(a>b && a>c)
    {
        l1=a;
        l2=b;
        l3=c;
    }
    else
        if(b>c)
        {
            l1=b;
            l2=a;
            l3=c;
        }
        else
        {
            l1=c;
            l2=a;
            l3=b;
        }
    if(l1>=l2+l3)
        printf("NAO FORMA TRIANGULO\n");
        
    else
    {
    if(pow(l1,2)==pow(l2,2)+pow(l3,2))
        printf("TRIANGULO RETANGULO\n");
        
    if(pow(l1,2)>pow(l2,2)+pow(l3,2))
        printf("TRIANGULO OBTUSANGULO\n");
        
    if(pow(l1,2)<pow(l2,2)+pow(l3,2))
        printf("TRIANGULO ACUTANGULO\n");
        
    if(l1==l2 && l2==l3)
        printf("TRIANGULO EQUILATERO\n");
        
    if((l1==l2 && l1!=l3)||(l1==l3 && l1!=l2)||(l2==l3 && l2!=l1))
        printf("TRIANGULO ISOSCELES\n");
    }        
    
    return 0;
}
