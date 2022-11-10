// 26-02-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    double salario,percentual,reajuste,ns,r;
    
    scanf("%lf",&salario);
    
    if(salario<=400)
        percentual=0.15;
    
    if(salario>400 && salario<=800)
        percentual=0.12;
        
    if(salario>800 && salario<=1200)
        percentual=0.10;
        
    if(salario>1200 && salario<=2000)
        percentual=0.07;
        
    if(salario>2000)
        percentual=0.04;
        
    reajuste=salario*percentual;
    r=percentual*100;
    ns=salario+reajuste;
        
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %.0lf %\n",ns,reajuste,r);
 
    return 0;
}
