#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int mod = 1e9 + 7;

ll phep_nhan(ll, ll);

int main() {
    #ifndef TEST
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b;
    cin >> a >> b;

    cout << phep_nhan(a, b) << endl;

    return 0;
}

ll phep_nhan(ll a, ll b) {
    ll sum = 0;

    while(b) {
        if(b % 2 != 0) {
            sum = (sum + a) % mod;
        }
        a = (a * 2) % mod;
        b /= 2;
    }

    return sum;
}
