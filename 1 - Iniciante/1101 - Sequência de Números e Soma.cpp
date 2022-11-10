// 13-06-2022

#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, m, i, sum;
    
    scanf("%d%d", &n, &m);
    
    while(n>0 && m>0) {
        sum=0;
		if(n>m) {
            for(i=m;i<=n;i++) {
                printf("%d ", i);
                sum+=i;
            }
            printf("Sum=%d\n", sum);
        }
        else {
            for(i=n;i<=m;i++) {
                printf("%d ", i);
                sum+=i;
            }
            printf("Sum=%d\n", sum);
        }
        
        scanf("%d%d", &n, &m);
    }
 
    return 0;
}
