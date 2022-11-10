// 24-10-2022

#include <bits/stdc++.h>

using namespace std;

int main () {
	
	int x, z, i, j, cont=1;
	
	cin >> x;
	cin >> z;
	while(x>=z) {
		cin >> z;
	}
	
	for(i=x, j=x; i<z; j++) {
		i += j;
		cont++;
	}
	
	cout << cont << endl;
	
	return 0;
}
