// 16-08-2022

#include <iostream>
 
using namespace std;
 
int main() {
	
	double resp=1, i=3, j=2;
	
	while(i<40) {
		resp=resp+(i/(j));
		i+=2;
		j=j*2;
	}
	
	printf("%.2lf\n", resp);
	
	return 0;
}
