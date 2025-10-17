#include <bits/stdc++.h>
using namespace std;

int max_arr(int[], int);

int main() {
    
    return 0;
}

int max_arr(int arr[], int n) {
    int res = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(res < arr[i]) {
            res = arr[i];
        }
    }
    return res;
}
