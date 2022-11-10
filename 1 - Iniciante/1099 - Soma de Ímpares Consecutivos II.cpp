// 13-06-2022

#include <iostream>
 
using namespace std;
 
int main() {
	
	int x, y, n, i, j, cont;
	
	scanf("%d", &n);
	
	for(i=0;i<n;i++) {
		cont=0;
		scanf("%d%d", &x, &y);
		if(x<y) {
			if(x%2==0) {
				for(j=x+1;j<y;j+=2) {
					cont+=j;
				}
			}
			else {
				for(j=x+2;j<y;j+=2) {
					cont+=j;
				}
			}
			printf("%d\n",cont);
		}
		else {
			if(y%2==0) {
				for(j=y+1;j<x;j+=2) {
					cont+=j;
				}
			}
			else {
				for(j=y+2;j<x;j+=2) {
					cont+=j;
				}
			}
			printf("%d\n",cont);
		}
	}
	return 0;
}
