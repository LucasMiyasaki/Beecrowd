// 25-02-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    double a,b,c,area,perimetro;
    
    scanf("%lf%lf%lf",&a,&b,&c);
    
    if(a>b && a>c)
        if((b+c)<=a)
        {
            area=((a+b)*c)/2;
            printf("Area = %.1lf\n",area);
        }
        else
        {
            perimetro=a+b+c;
            printf("Perimetro = %.1lf\n",perimetro);
        }
        
    else
        if(b>c)
            if((a+c)<=b)
            {
                area=((a+b)*c)/2;
                printf("Area = %.1lf\n",area);
            }
            else
                {
                    perimetro=a+b+c;
                    printf("Perimetro = %.1lf\n",perimetro);
                }
        else
            {
                if((a+b)<=c)
                {
                    area=((a+b)*c)/2;
                    printf("Area = %.1lf\n",area);
                }
                else
                {
                    perimetro=a+b+c;
                    printf("Perimetro = %.1lf\n",perimetro);
                }
            }
 
    return 0;
}
