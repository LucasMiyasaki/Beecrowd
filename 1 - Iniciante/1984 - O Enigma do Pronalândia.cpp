// 10-11-2022

#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main() {
	
	char vet[10], aux;
	
	cin >> vet;
	
	for(int i=0, j=strlen(vet)-1; i<j; i++, j--) {
		aux=vet[i];
		vet[i]=vet[j];
		vet[j]=aux;
	}
	
	for(int i=0; i<strlen(vet); i++) {
		cout << vet[i];
	}
	cout << endl;
	
	return 0;
}
