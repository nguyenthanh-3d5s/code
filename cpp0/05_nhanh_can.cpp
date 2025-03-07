#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int can = INT_MAX;

void full_stack(int, int);

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    full_stack(n, 0);

    cout << can;

    return 0;
}

void full_stack(int n, int cnt) {
    if(can == cnt) return;

    if(n == 1) {
        can = cnt;
        return;
    }

    if(n % 2 == 0) full_stack(n / 2, cnt + 1);
    if(n % 3 == 0) full_stack(n / 3, cnt + 1);
    full_stack(n - 1, cnt + 1);
}
