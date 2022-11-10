// 23-02-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    int num,h;
    float rec,sal;
    
    scanf("%d",&num);
    scanf("%d",&h);
    scanf("%f",&rec);
    
    sal=rec*h;
    
    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %.2f\n",sal);
    
    return 0;
}
