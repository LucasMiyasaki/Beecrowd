// 08-11-2022

#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main() {
    
    int n, num1, num2;
    char nome1[100], nome2[100], lixo[100], par[100];
    
    cin >> n;
    
    for(int i=0; i<n; i++) {
    	cin >> nome1 >> par >> nome2 >> lixo;
    	cin >> num1 >> num2;
    	if(strlen(par)==3)
    		if((num1+num2)%2==0)
    			cout << nome1 << endl;
    	
    		else
    			cout << nome2 << endl;
    			
    	else
    		if((num1+num2)%2!=0)
    			cout << nome1 << endl;
    	
    		else
    			cout << nome2 << endl;
    }
    
    return 0;
}
