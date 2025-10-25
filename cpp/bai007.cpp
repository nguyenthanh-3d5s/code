#include <bits/stdc++.h>
using namespace std;

void fibonacci(int [], int);

int main() {
    int n; cin >> n;
    int arr[n] = {0, 1};

    fibonacci(arr, n);

    return 0;
}

void fibonacci(int arr[], int n) {
    for(int i = 2; i < n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
}
