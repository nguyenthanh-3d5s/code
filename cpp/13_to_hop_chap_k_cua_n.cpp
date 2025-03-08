#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

ll giai_thua(ll, ll = 1);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll k, n;
    cin >> k >> n;
    k = min(k, n - k);

    ll to_hop = giai_thua(n, n - k) / giai_thua(k);
    cout << to_hop << endl;

    return 0;
}

ll giai_thua(ll n, ll k) {
    ll res = 1;

    for(ll i = n; i > k; i--) {
        res *= i;
    }

    return res;
}
