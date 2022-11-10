// 02-11-2022

#include <bits/stdc++.h>

using namespace std;

int bin(int num) {
    int dec = 0, i = 0, rem;

    while (num!=0) {
        rem = num % 10;
        num /= 10;
        dec += rem * pow(2, i);
        i++;
    }

    return dec;
}

int main() {

    string crow;

    int cont=0, soma=0, num;

    while(cont<3) {
        getline(cin, crow);

        if(crow.length()!=7) {
            for(int i=0; i<3; i++) {
                if(crow[i]=='*')
                    crow[i]='1';

                else
                    crow[i]='0';
            }
            num=stoi(crow);
            num=bin(num);
            soma+=num;
        }
        else {
            cout << soma << endl;
            soma=0;
            cont++;
        }
    }

    return 0;
}
