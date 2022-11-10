// 13-06-2022

#include <iostream>
 
using namespace std;
 
int main() {
	
	double n1, n2;
	int resp=1, x;
	
	while(resp==1) {
		scanf("%lf", &n1);
		while(n1<0 || n1>10) {
			printf("nota invalida\n");
			scanf("%lf", &n1);
		}
		scanf("%lf", &n2);
		while(n2<0 || n2>10) {
			printf("nota invalida\n");
			scanf("%lf", &n2);
		}
		printf("media = %.2lf\n", ((n1+n2)/2));
		printf("novo calculo (1-sim 2-nao)\n");
		scanf("%d", &x);
		while(x!=1 && x!=2) {
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &x);
		}
		resp=x;
	}
	
	return 0;
}
