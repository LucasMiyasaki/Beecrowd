// 16-08-2022

#include <iostream>
 
using namespace std;
 
int main() {
	
	int n, i;
	
	scanf("%d", &n);
	
	for(i=1;i<=n;i++) {
		if(n%i==0) {
			printf("%d\n", i);
		}
	}
	
	return 0;
}
