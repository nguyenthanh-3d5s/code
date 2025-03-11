#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

void full_stack(int);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    full_stack(n);

    return 0;
}

void full_stack(int n) {
    if(n == 0) return;
    if(n == 1) {
        cout << n << " ";
        return;
    }

    full_stack(n - 1);
    full_stack(n - 2);
}
