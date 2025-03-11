#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

void de_quy(int);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    de_quy(n);

    return 0;
}

void de_quy(int n) {
    if(n == 0) return;

    cout << n << " ";
    de_quy(n - 1);
}
