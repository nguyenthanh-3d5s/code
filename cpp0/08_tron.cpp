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

    int n, m;
    cin >> n >> m;

    int a[n], b[m];

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    int i = 0, j = 0;

    while(i < n && j < m) {
        if(a[i] < b[j]) {
            cout << a[i++] << " ";
        }
        else{
            cout << b[j++] << " ";
        }
    }

    while(i < n) {
        cout << a[i++] << " ";
    }

    while(j < m) {
        cout << b[j++] << " ";
    }

    return 0;
}
