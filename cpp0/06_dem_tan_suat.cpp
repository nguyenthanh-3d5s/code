#include <bits/stdc++.h>
using namespace std;

using ll = long long;

using mp = map<int, int>;
using pi = pair<int, int>;
#define fi first
#define se second

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    mp arr;

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        arr[x]++;
    }

    for(pi i : arr) {
        cout << i.fi << " " << i.se << endl;
    }

    return 0;
}
