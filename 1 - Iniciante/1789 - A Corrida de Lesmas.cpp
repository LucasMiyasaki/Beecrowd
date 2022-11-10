// 01-11-2022

#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n, num, maior;
	
	while(cin >> n) {
		maior=0;
		for(int i=0; i<n; i++) {
			cin >> num;
			if(num>maior)
				maior=num;
		}
		if(maior<10)
			cout << 1 << endl;
			
		if(maior>=10 && maior<20)
			cout << 2 << endl;
			
		if(maior>=20)
			cout << 3 << endl;
	}
	
	return 0;
}
