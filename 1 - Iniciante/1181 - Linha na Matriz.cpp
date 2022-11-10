// 31-10-2022

#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n;
	double num, soma=0;
	char c;
	
	cin >> n;
	cin >> c;
	for(int i=0, j=0, k=0; i<144; i++) {	
		cin >> num;
		if(k==n)
			soma+=num;
			
		if(j==11) {
			k++;
			j=0;
		}
		
		else
			j++;
	}
	if(c=='S')
		printf("%.1lf\n", soma);
		
	if(c=='M')
		printf("%.1lf\n", soma/12);
	
	return 0;
}
