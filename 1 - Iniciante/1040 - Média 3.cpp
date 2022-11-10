// 25-02-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    double n1,n2,n3,n4,media,e,final;
    
    scanf("%lf%lf%lf%lf",&n1,&n2,&n3,&n4);
    scanf("%lf",&e);
    
    media=(n1*2+n2*3+n3*4+n4*1)/(2+3+4+1);
    
    if(media>=7)
        {
        printf("Media: %.1lf\n",media);
        printf("Aluno aprovado.\n");
        }
        
    if(media<5)
        {
        printf("Media: %.1lf\n",media);
        printf("Aluno reprovado.\n");
        }
        
    if(media>=5 && media<7)
        {
        printf("Media: %.1lf\n",media);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1lf\n",e);
        
        final=(e+media)/2;
        
        if(final>=5)
            {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n",final);
            }
            
        else
            {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n",final);
            }
        }
        
    return 0;
}
