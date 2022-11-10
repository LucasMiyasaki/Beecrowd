// 23-02-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    char n;
    double sal,vendas,total;
    
    scanf("%s",&n);
    scanf("%lf",&sal);
    scanf("%lf",&vendas);
    
    total=sal+vendas*0.15;
    
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}
