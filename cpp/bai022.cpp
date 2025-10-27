nó#include <bits/stdc++.h>
using namespace std;

#define sz(a) (int) (a).size()

typedef vector<int> vi;

void nhap(vi&);
void xuat(vi&);
void tron(vi&, vi&);

int main() {
    int n; cin >> n;
    int m; cin >> m;
    vi arr_01(n);
    vi arr_02(m);
    nhap(arr_01);
    nhap(arr_02);
    tron(arr_01, arr_02);
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

void tron(vi &arr_01, vi &arr_02) {
    int i = 0;
    int j = 0;
    int n = sz(arr_01);
    int m = sz(arr_02);

    while(i < n && j < m) {
        if(arr_01[i] < arr_02[j]) {
            cout << arr_01[i] << " ";
            i++;
        }
        else {
            cout << arr_02[j] << " ";
            j++;
        }
    }

    while(i < n) {
        cout << arr_01[i] << " ";
        i++;
    }

    while(j < m) {        
        cout << arr_02[j] << " ";
        j++;
    }
}
