// 26-02-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    int h1,m1,h2,m2,th,tm,tr,tr1,tr2;
    
    scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
    
    tr1=h1*60+m1;
    tr2=h2*60+m2;
    
    if(tr1==tr2)
    {
        th=24;
        tm=0;
    }
    if(tr2>tr1)
    {
        tr=tr2-tr1;
        th=tr/60;
        tm=tr%60;
    }
    if(tr1>tr2)
    {
        tr=(1440-tr1)+tr2;
        th=tr/60;
        tm=tr%60;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",th,tm);
    
    
    return 0;
}
