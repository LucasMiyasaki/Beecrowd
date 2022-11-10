// 13-04-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    int senha;

    while(senha!=2002)
    {
        scanf("%d",&senha);
        if(senha==2002)
            printf("Acesso Permitido\n");
            
        else
            printf("Senha Invalida\n");
    }
 
    return 0;
}
