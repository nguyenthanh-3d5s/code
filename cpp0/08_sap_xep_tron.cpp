#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

using vi = vector<int>;
#define pb push_back
#define sz(x) (int) (x).size()

typedef bool (*func_cmp)(int &, int &);

inline bool cmp_tang(int &a, int &b) {return a <= b;}
inline bool cmp_giam(int &a, int &b) {return a >= b;}

void tron(vi &, int, int, int, func_cmp);
void sap_xep_tron(vi &, int, int, func_cmp);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    vi arr;

    while(cin >> n) {
        arr.pb(n);
    }

    sap_xep_tron(arr, 0, sz(arr) - 1, cmp_tang);

    for(int i : arr) {
        cout << i << " ";
    }

    return 0;
}

void tron(vi &arr, int l, int m, int r, func_cmp cmp) {
    vi a(arr.begin() + l, arr.begin() + m + 1);
    vi b(arr.begin() + m + 1, arr.begin() + r + 1);

    int i = 0, j = 0;

    while(i < sz(a) && j < sz(b)) {
        if(cmp(a[i], b[j])) {
            arr[l++] = a[i++];
        }
        else {
            arr[l++] = b[j++];
        }
    }

    while(i < sz(a)) {
        arr[l++] = a[i++];
    }

    while(j < sz(b)) {
        arr[l++] = b[j++];
    }
}

void sap_xep_tron(vi &arr, int l, int r, func_cmp cmp) {
    if(l >= r) return;
    int m = l + (r - l) / 2;
    sap_xep_tron(arr, l, m, cmp);
    sap_xep_tron(arr, m + 1, r, cmp);
    tron(arr, l, m, r, cmp);
}
