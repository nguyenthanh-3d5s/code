#include <stdio.h>
#define ll long long

int search(int arr[], int n, int x, int pos) {
    int l = 0, r = n - 1;
    int res = -1;

    while(l <= r) {
        int m = (l + r) / 2;

        if(arr[m] == x) {
            res = m;
            if(pos == 1) r = m - 1;
            if(pos == 2) l = m + 1;
            if(pos == 0) break;
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

int main() {

    return 0;
}
