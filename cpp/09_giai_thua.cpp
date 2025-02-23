#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int n = 1e3;

using vi = vector<int>;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int) (x).size()

void big_int(vi &, int);

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vi arr;
    arr.pb(1);

    for(int i = 2; i <= n; i++) {
        big_int(arr, i);
    }

    for(int i = sz(arr) - 1; i >= 0; i--) {
        cout << arr[i];
    }
    cout << endl;

    return 0;
}

void big_int(vi &arr, int x) {
    int tmp = 0;

    for(int i = 0; i < sz(arr); i++) {
        int res = arr[i] * x + tmp;
        arr[i] = res % 10;
        tmp = res / 10;
    }

    while(tmp) {
        arr.pb(tmp % 10);
        tmp /= 10;
    }
}
