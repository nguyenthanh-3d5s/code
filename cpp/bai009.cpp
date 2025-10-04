#include <bits/stdc++.h>
using namespace std;

int phi_ham_euler(int);

int main() {

    return 0;
}

int phi_ham_euler(int a) {
    int res = a;
    
    for(int i = 2; i <= sqrt(a); i++) {
        if(a % i == 0) {
            res -= res / i;
        }

        while(a % i == 0) {
            a /= i;
        }
    }

    if(a > 1) {
        res -= res / a;
    }

    return res;
}
