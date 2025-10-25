#include <bits/stdc++.h>
using namespace std;

void thua_so_nguyen_to(int);

int main() {
    
    return 0;
}

void thua_so_nguyen_to(int n) {
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            cout << i;
            int cnt = 0;

            while(n % i == 0) {
                n /= i;
                cnt++;
            }

            cout << "^" << cnt;

            if(n > 1) {
                cout << " * ";
            }
        }
    }

    if(n > 1) {
        cout << n << "^1";
    }
}
