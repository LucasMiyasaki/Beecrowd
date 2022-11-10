// 10-11-2022

#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n, ano;
	
	cin >> n;
	
	for(int i=0; i<n; i++) {
		cin >> ano;
		if((2015-ano)<=0)
			cout << abs(2015-ano)+1 << " A.C." << endl;
			
		else
			cout << (2015-ano) << " D.C." << endl;
	}
	
	return 0;
}
