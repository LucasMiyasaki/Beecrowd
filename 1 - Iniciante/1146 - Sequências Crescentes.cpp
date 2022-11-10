// 14-06-2022

#include <iostream>
 
using namespace std;
 
int main () {
	
	int a, i, cont, control;
	
	scanf("%d", &a);
	while(a!=0) {
		cont=1;
		control=0;
		for(i=0;i<a;i++) {
			if(control==a-1)
				printf("%d\n", cont);
				
			else
				printf("%d ",cont);
				
			cont++;
			control++;
		}
		
		scanf("%d", &a);
	}
	
	return 0;
}
