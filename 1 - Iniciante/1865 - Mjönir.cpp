// 08-11-2022

#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main() {
	
	int num, n;
	char nome[100];
	
	cin >> num;
	
	for(int i=0; i<num; i++) {
		fflush(stdin);
		cin >> nome;
		cin >> n;
		if(strcmp(nome,"Thor")==0 && n>0)
			cout << "Y" << endl;
		
		else
			cout << "N" << endl;
	}
	
	return 0;
}
