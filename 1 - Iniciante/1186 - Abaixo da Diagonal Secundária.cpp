// 23-05-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    int i, j, k;
    char c;
    float m[12][12], soma=0, cont=0;
    
    scanf(" %c", &c);
    
    for(i=0;i<12;i++)
        for(j=0;j<12;j++)
            scanf("%f", &m[i][j]);
    
    k=11;
    for(j=1;j<12;j++) {
        for(i=11;i>=k;i--)
        {
            soma+=m[i][j];
            cont++;
        }
        
        k--;
    }
        
            
    if(c=='S')
        printf("%.1f\n", soma);
        
    else
        printf("%.1f\n", (soma/cont));
 
    return 0;
}
