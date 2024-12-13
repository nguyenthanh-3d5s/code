#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int gcd(int, int);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << gcd(10, 15);

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
