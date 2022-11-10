// 25-10-2022

#include <bits/stdc++.h>

using namespace std;

int main () {
	
	int n, num, i, soma;
	
	cin >> n;
	for(i=0; i<n; i++) {
		cin >> num;
		soma=0;
		for(int j=1; j<num; j++) {
			if(num%j==0)
				soma += j;
		}
		if(soma==num)
			cout << num << " eh perfeito" << endl;
			
		else
			cout << num << " nao eh perfeito" << endl;
	}
	
	return 0;
}
