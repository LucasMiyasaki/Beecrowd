// 28-10-2022

#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int vet[20], n, TL, aux;
	
	for(int i=0; i<20; i++) {
		cin >> n;
		vet[i]=n;
		TL++;
	}
	TL--;
	for(int i=0; i<10; i++) {
		aux = vet[i];
		vet[i] = vet[TL];
		vet[TL] = aux;
		TL--;
	}
	for(int i=0; i<20; i++) {
		cout << "N[" << i << "] = " << vet[i] << endl;
	}
	
	return 0;
}
