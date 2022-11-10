// 31-10-2022

#include <bits/stdc++.h>

using namespace std;

int main() {
	
	long long int n, num, first=0, menor,pos;
	
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> num;
		
		if(first=0) {
			menor=num;
			pos=i;
		}
		else if(num<menor) {
			menor=num;
			pos=i;
		}
	}
	
	cout << "Menor valor: " << menor << endl;
	cout << "Posicao: " << pos << endl;
	
	return 0;
}
