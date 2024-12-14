#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define sz(a) (int) size(a)
typedef vector<int> vi;

void fibo(vi &);
void output(vi &);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vi arr(n);
    fibo(arr);
    output(arr);

    return 0;
}

void fibo(vi &arr) {
    arr[0] = 0;
    arr[1] = 1;

    for(int i = 2; i < sz(arr); i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
}

void output(vi &arr) {
    for(int &i : arr) {
        cout << i << " ";
    }
}
