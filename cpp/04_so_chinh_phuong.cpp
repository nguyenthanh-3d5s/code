#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

bool chinh_phuong(int);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    cout << chinh_phuong(n) << endl;

    return 0;
}

bool chinh_phuong(int n) {
    int m = sqrt(n);
    return m * m == n;
}
