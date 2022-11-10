// 04-03-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    float n1,n2,n3,n4,n5,n6,i,n_1,n_2,n_3,n_4,n_5,n_6,media;
    
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    scanf("%f",&n4);
    scanf("%f",&n5);
    scanf("%f",&n6);
    
    i=0;
    n_1=0;
    n_2=0;
    n_3=0;
    n_4=0;
    n_5=0;
    n_6=0;
    
    
    if(n1>0)
        {
            i=i+1;
            n_1=n1;
        }
    if(n2>0)
        {
            i=i+1;
            n_2=n2;
        }
    if(n3>0)
        {
            i=i+1;
            n_3=n3;
        }
    if(n4>0)
        {
            i=i+1;
            n_4=n4;
        }
    if(n5>0)
        {
            i=i+1;
            n_5=n5;
        }
    if(n6>0)
        {
            i=i+1;
            n_6=n6;
        }


    media=(n_1+n_2+n_3+n_4+n_5+n_6)/(i);
    
    printf("%.0f valores positivos\n",i);
    printf("%.1f\n",media);

    return 0;
}
