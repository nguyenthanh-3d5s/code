#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int n = 1e7 + 1;
bool arr[n];

void fibo();

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    fibo();
    
    cout << arr[n - 1] << endl;

    return 0;
}

void fibo() {
    for(int i = 0; i < n; i++) {
        arr[i] = true;
    }

    arr[0] = arr[1] = false;

    for(int i = 2; i <= sqrt(n); i++) {
        if(arr[i]) {
            for(int j = i * i; j < n; j += i) {
                arr[j] = false;
            }
        }
    }
}
