#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

const int mod = 1e9 + 7;

ll luy_thua(ll, ll);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b;
    cin >> a >> b;

    cout << luy_thua(a, b) << endl;

    return 0;
}

ll luy_thua(ll a, ll b) {
    a %= mod;
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
