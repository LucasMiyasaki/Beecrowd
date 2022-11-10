// 15-03-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    int n,i;
    double n1,n2,n3,media;
    
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        scanf("%lf%lf%lf",&n1,&n2,&n3);
        media=(n1*2+n2*3+n3*5)/(2+3+5);
        printf("%.1lf\n",media);
    }
 
    return 0;
}
