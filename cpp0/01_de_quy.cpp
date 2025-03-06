#include <bits/stdc++.h>
using namespace std;

using ll = long long;

using vi = vector<int>;
#define pb push_back
#define sz(x) (int) (x).size()

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int sum = 0;
    vi arr;

    for(int i = n; i > 0; i--) {
        arr.pb(i);
        sum += i;
    }

    cout << sum;
    return 0;
}
