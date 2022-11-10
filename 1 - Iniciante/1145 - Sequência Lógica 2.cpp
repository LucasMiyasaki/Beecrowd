// 14-06-2022

#include <iostream>
 
using namespace std;
 
int main () {
	
	int a, b, i, cont=1, control;
	
	scanf("%d%d", &a, &b);
	
	while(cont<=b) {
		control=0;
		for(i=0;i<a;i++) {
			if(control==a-1) {
				printf("%d", cont);
			}
			else
				printf("%d ",cont);
				
			cont++;
			control++;
		}
		printf("\n");
	} 
	
	return 0;
}
