#include <bits/stdc++.h>
using namespace std;

#define sz(a) (int) (a).size()
#define all(a) (a).begin(), (a).end()

typedef vector<int> vi;

void nhap(vi&);
void xuat(vi&);
bool cmp(int&, int&);

int main() {
    int n; cin >> n;
    vi arr(n);
    nhap(arr);
    sort(all(arr), cmp);
    xuat(arr);
    return 0;
}

void nhap(vi &arr) {
    for(int i = 0; i < sz(arr); i++) {
        cin >> arr[i];
    }
}

void xuat(vi &arr) {
    for(int i = 0; i < sz(arr); i++) {
        int j = *(arr.begin() + i);
        cout << j << " ";
    }
}

bool cmp(int &a, int &b) {
    return a > b;
}
