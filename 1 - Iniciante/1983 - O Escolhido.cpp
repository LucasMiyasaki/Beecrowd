// 10-11-2022

#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n;
	double num, id, maior, mid;
	
	cin >> n;
	
	for(int i=0; i<n; i++) {
		cin >> id >> num;
		
		if(i==0) {
			maior=num;
			mid=id;
		}
			
		if(num>maior) {
			maior=num;
			mid=id;
		}
	}
	if(maior<8)
		cout << "Minimum note not reached" << endl;
		
	else
		cout << mid << endl;
	
	return 0;
}
