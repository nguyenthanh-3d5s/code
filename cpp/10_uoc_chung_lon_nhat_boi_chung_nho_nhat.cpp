#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

int gcd(int, int);
int lcm(int, int);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << gcd(10, 15) << endl;
    cout << lcm(10, 15) << endl;

    return 0;
}

int gcd(int a, int b) {
    while(b) {
        int tmp = a % b;
        a = b;
        b = tmp;
    }

    return a;
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}
