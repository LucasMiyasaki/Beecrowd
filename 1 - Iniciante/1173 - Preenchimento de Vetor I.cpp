// 28-10-2022

#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int vet[10], n;
	
	cin >> n;
	vet[0]=n;
	cout << "N[0] = " << n << endl;
	
	for(int i=1; i<10; i++) {
		vet[i]=vet[i-1]*2;
		cout << "N[" << i << "] = " << vet[i] << endl;
	}
	
	return 0;
}
