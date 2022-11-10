// 16-08-2022

#include <iostream>
 
using namespace std;
 
int main() {
	
	int idade[100], var, i=0, j;
	
	double media=0;
	
	scanf("%d", &var);
	while(var>=0) {
		idade[i]=var;
		i++;
		scanf("%d", &var);
	}
	for(j=0;j<i;j++) {
		media=media+idade[j];
	}
	printf("%.2lf\n", (media/i));
	
	return 0;
}
