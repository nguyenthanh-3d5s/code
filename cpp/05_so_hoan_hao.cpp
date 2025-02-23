#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool nguyen_to(ll);
void hoan_hao();

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    hoan_hao();

    return 0;
}

bool nguyen_to(ll n) {
    if(n < 2) {
        return false;
    }

    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            return false;
        }
    }

    return true;
}

void hoan_hao() {
    for(int i = 1; i < 32; i++) {
        if(nguyen_to(i)) {
            ll m1 = pow(2, i) - 1;

            if(nguyen_to(m1)) {
                ll m2 = pow(2, i - 1);
                cout << m1 * m2 << endl;
            }
        }
    }
}
