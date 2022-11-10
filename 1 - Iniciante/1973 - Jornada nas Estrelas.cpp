// 10-11-2022

#include <bits/stdc++.h>

using namespace std;

int main() {
	
	long long int n, c[1000000], i, soma=0, total=0, estrela=0;
	
	cin >> n;
	
	for(i=0; i<n; i++) {
		cin >> c[i];
		total+=c[i];
	}
	i=0;
	while(i>=0 && i<n) {
		if(c[i]!=0)
		    soma++;
		if(i+1>estrela)
			estrela=i+1;
		if(c[i]%2==0) {
			c[i]--;
			i--;
		}
		else {
			c[i]--;
			i++;
		}
	}
	cout << estrela << " " << (total-soma) << endl;
	
	return 0;
}
