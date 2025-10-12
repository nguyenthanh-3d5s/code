#include <bits/stdc++.h>
using namespace std;

void thua_so_nguyen_to(int);

int main() {
    
    return 0;
}

void thua_so_nguyen_to(int n) {
    for(int i = 2; i <= sqrt(n); i++) {
        while(n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }

    if(n > 1) {
        cout << n;
    }
}
