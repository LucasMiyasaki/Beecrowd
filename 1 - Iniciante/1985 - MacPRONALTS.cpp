// 10-11-2022

#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main() {
	
	int n, id, quant;
	double soma=0;
	
	cin >> n;
	
	for(int i=0; i<n; i++) {
		cin >> id >> quant;
		
		if(id==1001)
			soma+=(1.5*quant);
			
		if(id==1002)
			soma+=(2.5*quant);
			
		if(id==1003)
			soma+=(3.5*quant);
			
		if(id==1004)
			soma+=(4.5*quant);
			
		if(id==1005)
			soma+=(5.5*quant);
	}
	printf("%.2lf\n", soma);
	
	return 0;
}
