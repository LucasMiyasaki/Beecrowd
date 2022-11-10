// 23-02-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    int p1,n1,p2,n2;
    float v1,v2,total;
    
    scanf("%d%d%f",&p1,&n1,&v1);
    scanf("%d%d%f",&p2,&n2,&v2);
    
    total=n1*v1+n2*v2;
    
    printf("VALOR A PAGAR: R$ %.2f\n",total);
 
    return 0;
}
