#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int gcd(int, int);
int lcm(int, int);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << gcd(10, 15) << "\n";
    cout << lcm(10, 15) << "\n";

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

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}
