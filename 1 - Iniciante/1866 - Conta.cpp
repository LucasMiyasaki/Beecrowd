// 08-11-2022

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int num, n;
    
    cin >> n;
    
    for(int i=0; i<n; i++) {
        cin >> num;
        if(num%2==0)
            cout << 0 << endl;
            
        else
            cout << 1 << endl;
    }
    
    return 0;
}
