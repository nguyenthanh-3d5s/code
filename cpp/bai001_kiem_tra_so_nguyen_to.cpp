#include <iostream>
#include <cmath>
using namespace std;

bool Prime(int);

int main() {
    int a; cin >> a;
    cout << (Prime(a) ? "Yes" : "No");
    return 0;
}

bool Prime(int n) {
    if(n < 2) return false;

    int _n = sqrt(n) + 1;

    for(int i = 2; i < _n; i++) {
        if(n % i == 0) return false;
    }

    return true;
}
