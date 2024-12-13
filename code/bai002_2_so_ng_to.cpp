#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int gcd(int, int);
bool prime(int, int);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << (prime(8, 5) ? true : false);

    return 0;
}

int gcd(int a, int b) {
    while(b != 0) {
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

bool prime(int a, int b) {
    return gcd(a, b) == 1;
}
