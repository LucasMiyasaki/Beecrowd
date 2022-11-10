// 05-05-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    double i, j, cont;
    
    for(i=0;i<2.1;i=i+0.2)
    {
        for(j=1+i, cont=0;cont<3;cont++)
        {
            if(i<0.1 || (i>0.9 && i<1.1) || i>1.9)
                printf("I=%.lf J=%.lf\n", i, j);
            
            else
                printf("I=%.1lf J=%.1lf\n", i ,j);
                
            j+=1;
        }
    }
 
    return 0;
}
