// 23-02-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    int A,B,C,maiorab,maiorabc;
    
    scanf("%d%d%d",&A,&B,&C);
    
    maiorab=(A+B+abs(A-B))/2;
    
    if(maiorab>C)
        printf("%d eh o maior\n",maiorab);
        
    else
        printf("%d eh o maior\n",C);
 
    return 0;
}
