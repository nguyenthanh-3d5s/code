#include <iostream>
#include <cmath>
using namespace std;

void Prime_fact(int);

int main() {
    int a; cin >> a;
    Prime_fact(a);
    return 0;
}

void Prime_fact(int n) {
    if(n < 2) return;

    int _n = sqrt(n) + 1;

    for(int i = 2; i < _n; i++) {
        while(n % i == 0) {
            cout << i << " ";
            n /= i;
        }
        _n = sqrt(n) + 1;
    }

    if(n > 1) cout << n;
}
