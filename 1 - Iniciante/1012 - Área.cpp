// 23-02-2022

#include <iostream>
#include <math.h> 
using namespace std;
 
int main() {
 
    double A,B,C,At,Ac,Atp,Aq,Ar;
    
    scanf("%lf%lf%lf",&A,&B,&C);
    
    At=A*C/2;
    Ac=3.14159*pow(C,2);
    Atp=(A+B)*C/2;
    Aq=B*B;
    Ar=A*B;
    
    printf("TRIANGULO: %.3lf\n",At);
    printf("CIRCULO: %.3lf\n",Ac);
    printf("TRAPEZIO: %.3lf\n",Atp);
    printf("QUADRADO: %.3lf\n",Aq);
    printf("RETANGULO: %.3lf\n",Ar);
 
    return 0;
}
