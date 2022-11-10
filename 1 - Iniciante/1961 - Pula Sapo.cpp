// 10-11-2022

#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n, pulo, canos[100], resp=0;
	
	cin >> pulo >> n;
	
	for(int i=0; i<n; i++) {
		cin >> canos[i];
	}
	for(int i=0; i<n-1; i++) {
		if(abs(canos[i]-canos[i+1])>pulo)
			resp=1;
	}
	if(resp==0)
		cout << "YOU WIN" << endl;
		
	else
		cout << "GAME OVER" << endl;
	
	return 0;
}
