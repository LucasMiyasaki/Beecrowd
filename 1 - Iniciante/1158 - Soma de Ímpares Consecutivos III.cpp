// 24-10-2022

#include <bits/stdc++.h>

using namespace std;

int main () {
	
	int n, x, y, i, j, soma;
	
	cin >> n;
	
	for(i=0; i<n; i++) {
		cin >> x >> y;
		
		if(x%2==0)
			x++;
		
		soma=0;
		for(j=0; j<y; j++) {
			soma += x;
			x += 2;
		}
		cout << soma << endl;
	}
	
	return 0;
}
