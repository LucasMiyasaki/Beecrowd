// 23-02-2022

#include <stdio.h>
 
using namespace std;
 
int main() {
 
   int cem,cinq,vinte,dez,cinco,dois,um,c50,c25,c10,c5,a;
   
   double n;
   
   scanf("%lf",&n);
   
   a=n*100;
   cem=a/10000;
   a=a%10000;
   cinq=a/5000;
   a=a%5000;
   vinte=a/2000;
   a=a%2000;
   dez=a/1000;
   a=a%1000;
   cinco=a/500;
   a=a%500;
   dois=a/200;
   a=a%200;
   um=a/100;
   a=a%100;
   c50=a/50;
   a=a%50;
   c25=a/25;
   a=a%25;
   c10=a/10;
   a=a%10;
   c5=a/5;
   a=a%5;
   
   printf("NOTAS:\n");
   printf("%d nota(s) de R$ 100.00\n",cem);
   printf("%d nota(s) de R$ 50.00\n",cinq);
   printf("%d nota(s) de R$ 20.00\n",vinte);
   printf("%d nota(s) de R$ 10.00\n",dez);
   printf("%d nota(s) de R$ 5.00\n",cinco);
   printf("%d nota(s) de R$ 2.00\n",dois);
   printf("MOEDAS:\n");
   printf("%d moeda(s) de R$ 1.00\n",um);
   printf("%d moeda(s) de R$ 0.50\n",c50);
   printf("%d moeda(s) de R$ 0.25\n",c25);
   printf("%d moeda(s) de R$ 0.10\n",c10);
   printf("%d moeda(s) de R$ 0.05\n",c5);
   printf("%d moeda(s) de R$ 0.01\n",a);
   
    
    return 0;
}
