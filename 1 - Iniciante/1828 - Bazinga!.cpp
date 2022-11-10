// 01-11-2022

#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main() {
	
	int n,cont=1;
	
	char op1[20], op2[20];
	
	cin >> n;
	for(int i=0;i<n;i++) {
		cin >> op1 >> op2;
		if(strcmp(op1,"tesoura")==0) {
			if(strcmp(op2,"papel")==0 || strcmp(op2,"lagarto")==0)
				cout << "Caso #" << cont << ": Bazinga!" << endl;
			else if(strcmp(op2,"Spock")==0 || strcmp(op2,"pedra")==0)
				cout << "Caso #" << cont << ": Raj trapaceou!" << endl;
			else
				cout << "Caso #" << cont << ": De novo!" << endl;
		}
		if(strcmp(op1,"papel")==0) {
			if(strcmp(op2,"Spock")==0 || strcmp(op2,"pedra")==0)
				cout << "Caso #" << cont << ": Bazinga!" << endl;
			else if(strcmp(op2,"tesoura")==0 || strcmp(op2,"lagarto")==0)
				cout << "Caso #" << cont << ": Raj trapaceou!" << endl;
			else
				cout << "Caso #" << cont << ": De novo!" << endl;
		}
		if(strcmp(op1,"pedra")==0) {
			if(strcmp(op2,"lagarto")==0 || strcmp(op2,"tesoura")==0)
				cout << "Caso #" << cont << ": Bazinga!" << endl;
			else if(strcmp(op2,"papel")==0 || strcmp(op2,"Spock")==0)
				cout << "Caso #" << cont << ": Raj trapaceou!" << endl;
			else
				cout << "Caso #" << cont << ": De novo!" << endl;
		}
		if(strcmp(op1,"lagarto")==0) {
			if(strcmp(op2,"Spock")==0 || strcmp(op2,"papel")==0)
				cout << "Caso #" << cont << ": Bazinga!" << endl;
			else if(strcmp(op2,"pedra")==0 || strcmp(op2,"tesoura")==0)
				cout << "Caso #" << cont << ": Raj trapaceou!" << endl;
			else
				cout << "Caso #" << cont << ": De novo!" << endl;
		}
		if(strcmp(op1,"Spock")==0) {
			if(strcmp(op2,"tesoura")==0 || strcmp(op2,"pedra")==0)
				cout << "Caso #" << cont << ": Bazinga!" << endl;
			else if(strcmp(op2,"lagarto")==0 || strcmp(op2,"papel")==0)
				cout << "Caso #" << cont << ": Raj trapaceou!" << endl;
			else
				cout << "Caso #" << cont << ": De novo!" << endl;
		}
		cont++;
	}
	
	return 0;
}
