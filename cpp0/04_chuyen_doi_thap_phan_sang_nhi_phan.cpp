#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

void quay_lui(int);

int main() {
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
