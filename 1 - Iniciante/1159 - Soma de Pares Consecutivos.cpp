// 24-10-2022

#include <bits/stdc++.h>

using namespace std;

int main () {
	
	int x, i, soma;
	
	cin >> x;
	while(x!=0) {
		if(x%2!=0)
			x++;
			
		soma=0;
		for(i=0; i<5; i++) {
			soma += x;
			x += 2;
		}
		
		cout << soma << endl;
		
		cin >> x;
	}
	
	return 0;
}
