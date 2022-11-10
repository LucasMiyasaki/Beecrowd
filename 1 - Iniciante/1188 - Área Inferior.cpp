// 31-10-2022

#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int j, k, inicio=0, final=11;
	double soma=0, num;
	char c;
	
	cin >> c;
	
	for(int i=0; i<144; i++) {
		if(j==12) {
			j=0;
			inicio++;
			final--;
		}
			
		cin >> num;
		if(j>final && j<inicio)
			soma+=num;
			
		j++;
	}
	if(c=='S')
		printf("%.1lf\n", soma);
		
	else
		printf("%.1lf\n", soma/30);
	
	return 0;
}
