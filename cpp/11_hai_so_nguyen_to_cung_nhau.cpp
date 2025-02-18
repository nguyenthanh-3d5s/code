#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int gcd(int, int);

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    for(int i = a; i <= b; i++) {
        for(int j = i + 1; j <= b; j++) {
            if(gcd(i, j) == 1) {
                cout << "(" << i << "," << j << ")" << endl;
            }
        }
    }

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
