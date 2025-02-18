#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int mod = 1e9 + 7;

ll luy_thua(ll, ll);

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a;
    cin >> a;

    ll nghich_dao = luy_thua(a, mod - 2);
    cout << nghich_dao << endl;

    return 0;
}

ll luy_thua(ll a, ll b) {
    ll res = 1;

    while(b) {
        if(b % 2 != 0) {
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        b /= 2;
    }

    return res;
}
