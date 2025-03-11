#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

void full_stack(int, int, int &);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int can = INT_MAX;

    full_stack(n, 0, can);

    cout << can;

    return 0;
}

void full_stack(int n, int cnt, int &can) {
    if(can == cnt) return;

    if(n == 1) {
        can = cnt;
        return;
    }

    if(n % 2 == 0) full_stack(n / 2, cnt + 1, can);
    if(n % 3 == 0) full_stack(n / 3, cnt + 1, can);
    full_stack(n - 1, cnt + 1, can);
}
