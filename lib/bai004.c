#include <stdio.h>
#define ll long long

int search(int arr[], int n, int x, int pos) {
    int l = 0, r = n - 1;
    int res = -1;

    while(l <= r) {
        int m = l + (r - l) / 2;

        if(arr[m] == x) {
            res = m;
            break;
        }
        else if(arr[m] > x) {
            r = m - 1;
        }
        else {
            l = m + 1;
        }
    }

    return res;
}

int main() {

    return 0;
}
