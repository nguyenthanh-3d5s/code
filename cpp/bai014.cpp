#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD (int) (1e9 + 7)

ll nhan_bin(ll, ll);
ll luy_thua_bin(ll, ll);
ll nghich_dao(ll);

int main() {
    
    return 0;
}

ll nhan_bin(ll a, ll b) {
    ll res = 0;

    while(b) {
        if(b % 2 != 0) {
            res = (res + a) % MOD;
        }
        
        b /= 2;
        a = (a * 2) % MOD;
    }
    return res;
}

ll luy_thua_bin(ll a, ll b) {
    ll res = 1;

    while(b) {
        if(b % 2 != 0) {
            res = nhan_bin(res, a);
        }

        b /= 2;
        a = nhan_bin(a, a);
    }
    return res;
}

ll nghich_dao(ll a) {
    return luy_thua_bin(a, MOD - 2);
}
