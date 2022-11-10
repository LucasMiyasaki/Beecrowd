// 03-05-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    int par[5], impar[5], i=0, n, j=0, k=0;
    
    while(i<15)
    {
        scanf("%d", &n);
        if(n%2==0)
        {
            par[j]=n;
            j++;
        }
        else
        {
            impar[k]=n;
            k++;
        }
        if(j==5)
        {
            for(j=0;j<5;j++)
                printf("par[%d] = %d\n", j, par[j]);
            
            j=0;
        }
        if(k==5)
        {
            for(k=0;k<5;k++)
                printf("impar[%d] = %d\n", k, impar[k]);
                
            k=0;
        }
        i++;
    }
    for(i=0;i<k;i++)
        printf("impar[%d] = %d\n", i, impar[i]);
        
    for(i=0;i<j;i++)
        printf("par[%d] = %d\n", i, par[i]);
 
    return 0;
}
