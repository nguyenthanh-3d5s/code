#include <bits/stdc++.h>
using namespace std;

#define n (int) 1e6

int arr[n];

void tan_suat(int[], int);

int main() {
    int m; cin >> m;
    int arr_1[m];

    tan_suat(arr_1, m);

    return 0;
}

void tan_suat(int arr_1[], int m) {
    for(int i = 0; i < m; i++) {
        int j; cin >> j;
        arr_1[i] = j;
        arr[j]++;
    }

    for(int i = 0; i < m; i++) {
        int j = arr_1[i];

        if(arr[j]) {
            printf("(%d, %d)\n", j, arr[j]);
            arr[j] = 0;
        }
    }
}
