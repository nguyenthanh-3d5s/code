#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

void thua_so(int);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n; cin >> n;
    
    thua_so(n);

    return 0;
}

void thua_so(int n) {
    if(n < 2) {
        cout << n << endl;
    }

    for(int i = 2; i <= sqrt(n); i++) {
        while(n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }

    if(n > 1) {
        cout << n << endl;
    }
}
