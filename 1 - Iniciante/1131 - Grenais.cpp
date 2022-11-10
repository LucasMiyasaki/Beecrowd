// 13-06-2022

#include <iostream>
 
using namespace std;
 
int main() {
	
	int i, g, resp=1, cont=0, inter=0, gre=0, empate=0;
	
	while(resp==1){
		scanf("%d%d", &i, &g);
		if(i>g) {
			inter++;
		}
		else
			if(i<g) {
				gre++;
			}
			else {
				empate++;
			}
		cont++;
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &resp);
	}
	printf("%d grenais\n", cont);
	printf("Inter:%d\n", inter);
	printf("Gremio:%d\n", gre);
	printf("Empates:%d\n", empate);
	if(inter>gre) {
		printf("Inter venceu mais\n");
	}
	else {
		if(inter<gre) {
			printf("Gremio venceu mais\n");
		}
		else {
			printf("Nao houve vencedor\n");
		}
	}
	
	return 0;
}
