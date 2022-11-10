// 14-03-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    double salario,resto,imposto;
    
    scanf("%lf",&salario);
    
    if(salario<=2000)
        printf("Isento\n");
        
    else
    {
    if(salario>2000 && salario<=3000)
    {
        resto=salario-2000;
        imposto=resto*0.08;
    }
    if(salario>3000 && salario<=4500)
    {
        resto=salario-2000;
        imposto=1000*0.08;
        resto=resto-1000;
        imposto=imposto+(resto*0.18);
    }
    if(salario>4500)
    {
        resto=salario-2000;
        imposto=1000*0.08+1500*0.18;
        resto=resto-2500;
        imposto=imposto+resto*0.28;
    }
    printf("R$ %.2lf\n",imposto);
    }
 
    return 0;
}
