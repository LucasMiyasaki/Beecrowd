// 25-10-2022

#include <bits/stdc++.h>

using namespace std;

int main () {
	
	int a, b, t, i, j;
	long long int pa, pb;
	double g1, g2;
	
	cin >> t;
	
	for(i=0; i<t; i++) {
		cin >> pa >> pb >> g1 >> g2;
		for(j=0; pa<=pb && j<102; j++) {
			pa *= 1+(g1/100);
			pb *= 1+(g2/100);
		}
		if(j>100)
			cout << "Mais de 1 seculo." << endl;
			
		else
			cout << j << " anos." << endl;
	}
	
	return 0;
}
