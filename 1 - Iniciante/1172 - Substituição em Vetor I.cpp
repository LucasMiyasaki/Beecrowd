// 25-10-2022

#include <bits/stdc++.h>

using namespace std;

int main () {
	
	int x[10], num;
	
	for(int i=0; i<10; i++) {
		cin >> num;
		if(num<=0)
			x[i]=1;
			
		else
			x[i]=num;
			
		cout << "X[" << i << "] = " << x[i] << endl;
	}
	
	return 0;
}
