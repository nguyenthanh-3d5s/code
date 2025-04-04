#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

int phi(int);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << phi(140) << endl;

    return 0;
}

int phi(int n) {
    int res = n;

    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            res -= res / i;

            while(n % i == 0) {
                n /= i;
            }
        }
    }

    if(n > 1) {
        res -= res / n;
    }

    return res;
}
