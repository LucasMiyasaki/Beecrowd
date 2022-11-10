// 30-10-2022

#include <iostream>

using namespace std;

int main() {

    double num;

    cin >> num;

    for(int i=0; i<100; i++) {
        printf("N[%d] = %.4lf\n", i, num);

        num/=2;
    }

    return 0;
}
