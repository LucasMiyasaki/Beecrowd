// 15-03-2022

#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
 
    int n;
    double q=0,i;
    
    scanf("%d",&n);
    
        for(i=2;i<=n;i=i+2)
        {
            q=pow(i,2);
            printf("%.0lf^2 = %.0lf\n",i,q);
        }
 
    return 0;
}
