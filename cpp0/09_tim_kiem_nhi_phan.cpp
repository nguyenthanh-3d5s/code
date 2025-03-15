#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

using vi = vector<int>;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int) (x).size()

inline bool cmp_tang(int &a, int &b) {return a < b;}
inline bool cmp_giam(int &a, int &b) {return a > b;}

int tim_kiem_nhi_phan(vi &, int, int, int);
int tim_kiem_ben_trai(vi &, int, int, int);
int tim_kiem_ben_phai(vi &, int, int, int);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    vi arr;

    while(cin >> n) {
        arr.pb(n);
    }

    sort(all(arr), cmp_tang);

    int x = tim_kiem_ben_phai(arr, 0, sz(arr) - 1, 2);

    if(x == -1) {
        cout << "khong tim thay";
    }
    else {
        cout << "vi tri: " << x;
    }

    return 0;
}

int tim_kiem_nhi_phan(vi &arr, int l, int r, int x) {
    int res = -1;

    while(l <= r) {
        int m = l + (r - l) / 2;

        if(arr[m] == x) {
            res = m;
            break;
        }
        else if(arr[m] < x) {
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }
    return res;
}

int tim_kiem_ben_trai(vi &arr, int l, int r, int x) {
    int res = -1;

    while(l <= r) {
        int m = l + (r - l) / 2;

        if(arr[m] == x) {
            res = m;
            r = m - 1;
        }
        else if(arr[m] < x) {
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }
    return res;
}

int tim_kiem_ben_phai(vi &arr, int l, int r, int x) {
    int res = -1;

    while(l <= r) {
        int m = l + (r - l) / 2;

        if(arr[m] == x) {
            res = m;
            l = m + 1;
        }
        else if(arr[m] < x) {
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }
    return res;
}
