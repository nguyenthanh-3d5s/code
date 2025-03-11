#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

using mp = map<int, int>;
using pi = pair<int, int>;
#define fi first
#define se second

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    mp arr;

    while(cin >> n) {
        arr[n]++;
    }

    for(pi i : arr) {
        cout << i.fi << " " << i.se << endl;
    }

    return 0;
}
