// 09-03-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    int codigo,a,g,d,i;
    
    a=0;
    g=0;
    d=0;
    
    for(i=1;codigo!=4;i++)
    {
        scanf("%d",&codigo);
        switch(codigo)
        {
            case 1:a=a+1;
            break;
            
            case 2:g=g+1;
            break;
            
            case 3:d=d+1;
            break;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",a);
    printf("Gasolina: %d\n",g);
    printf("Diesel: %d\n",d);
    
 
    return 0;
}
