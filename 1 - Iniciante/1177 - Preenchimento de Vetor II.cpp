// 30-10-2022

#include <iostream>

using namespace std;

int main() {

    int vet[1000], j, n;

    cin >> n;

    j=0;
    for(int i=0; i<1000; i++) {
        if(j>=n)
            j=0;
        
        cout << "N[" << i << "] = " << j << endl;

        j++;
    }

    return 0;
}
