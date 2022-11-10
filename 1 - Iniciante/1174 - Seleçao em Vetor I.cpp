// 03-05-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    float A[100], x, n;
    int i=0;
    
    while(i<100)
    {
        scanf("%f", &n);
        A[i]=n;
        if(A[i]<=10)
            printf("A[%d] = %.1f\n", i, A[i]);
        i++;
    }
 
    return 0;
}
