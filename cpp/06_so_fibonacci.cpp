#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl "\n"

const int n = 90;

void fibo(ll []);

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll arr[n];
    fibo(arr);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

void fibo(ll arr[]) {
    arr[0] = 0;
    arr[1] = 1;
    for(int i = 2; i < n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
}
