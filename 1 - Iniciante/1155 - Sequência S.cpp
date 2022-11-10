// 16-08-2022

#include <iostream>
 
using namespace std;
 
int main() {
	
	double resp=0, i;
	
	for(i=1;i<101;i++) {
		resp=resp+(1/i);
	}
	
	printf("%.2lf\n", resp);
	
	return 0;
}
