// 04-03-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    int dia,min,h,seg,th,diaf,minf,hf,segf,thf,resultado,rd,rh,rm,rs,resto;
    char a[15];
    
    scanf("%s%d",&a,&dia);
    scanf("%d%s%d%s%d",&h,&a,&min,&a,&seg);
    scanf("%s%d",&a,&diaf);
    scanf("%d%s%d%s%d",&hf,&a,&minf,&a,&segf);
    
    th=86400*dia+3600*h+60*min+seg;
    thf=86400*diaf+3600*hf+60*minf+segf;
    
    resultado=thf-th;
    
    rd=resultado/86400;
    resto=resultado%86400;
    
    rh=resto/3600;
    resto=resto%3600;
    
    rm=resto/60;
    rs=resto%60;
    
    printf("%d dia(s)\n",rd);
    printf("%d hora(s)\n",rh);
    printf("%d minuto(s)\n",rm);
    printf("%d segundo(s)\n",rs);
    
 
    return 0;
}
