#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
#define endl '\n'
#define ll long long

const ll mod = 1e9 + 7;

ll modpow(ll b, int e) {
    ll ans = 1;
    for(; e > 0; e >>= 1) {
        if(e & 1) {
            ans = (ans * b) % mod;
        }
        b = (b * b) % mod;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    cout << modpow(2, n) << endl;

    return 0;
}
