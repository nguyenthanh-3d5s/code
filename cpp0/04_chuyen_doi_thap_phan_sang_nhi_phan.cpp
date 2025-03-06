#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void quay_lui(int);

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    quay_lui(n);

    return 0;
}

void quay_lui(int n) {
    if(n == 0) return;

    quay_lui(n / 2);
    cout << n % 2 << " ";
}
