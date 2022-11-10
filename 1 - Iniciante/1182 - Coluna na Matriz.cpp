// 26-05-2022

#include <iostream>
 
using namespace std;
 
int main() {
    
    int n, i, j;
    char c;
    double mat[12][12], soma=0;
 
    scanf("%d", &n);
    scanf(" %c", &c);
    
    for(i=0;i<12;i++)
       for(j=0;j<12;j++) {
          scanf("%lf", &mat[i][j]);
          if(j==n)
             soma+=mat[i][j];
       }
       if(c=='S')
          printf("%.1lf\n", soma);
       else
          printf("%.1lf\n", soma/12);
 
    return 0;
}
