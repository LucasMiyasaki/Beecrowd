// 16-08-2022

#include <iostream>
 
using namespace std;
 
int main() {
	
	int n, resp=1, i, j;
	
	scanf("%d", &n);
	
	for(i=1;i<=n;i++) {
		resp=resp*i;
	}
	printf("%d\n", resp);
	
	return 0;
}
