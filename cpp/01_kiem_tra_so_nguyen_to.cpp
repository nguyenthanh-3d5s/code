#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool nguyen_to(int);

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a; cin >> a;
    
    cout << nguyen_to(a) << endl;

    return 0;
}

bool nguyen_to(int n) {
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
