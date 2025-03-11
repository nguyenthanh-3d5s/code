#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

using vi = vector<int>;
#define pb push_back
#define all(x) (x).begin(), (x).end()

typedef bool (*func_cmp)(int &, int &);

inline bool cmp_tang(int &a, int &b) {return a < b;}
inline bool cmp_giam(int &a, int &b) {return a > b;}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    vi arr;

    while(cin >> n) {
        arr.pb(n);
    }

    sort(all(arr), cmp_tang);

    for(int i : arr) {
        cout << i << " ";
    }

    return 0;
}
