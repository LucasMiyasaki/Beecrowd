// 30-10-2022

#include <iostream>

using namespace std;

int main() {

    long long int fib[1000000], n, num, j;

    fib[0]=0;
    fib[1]=1;

    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> num;
        
        for(j=2; j<=num; j++) {
            fib[j]=fib[j-1]+fib[j-2];
        }
        cout << "Fib(" << num << ") = " << fib[num] << endl;
    }

    return 0;
}
