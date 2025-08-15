#include <stdio.h>
#define ll long long

int search(int arr_1_[], int n_1, int x) {
    int l = 0, r = n_1 - 1;
    int pos = -1;

    while(l <= r) {
        int m = l + (r - l) / 2;

        if(arr_1_[m] == x) {
            pos = m;
            break;
        }
        else if(arr_1_[m] > x) {
            r = m - 1;
        }
        else {
            l = m + 1;
        }
    }

    return pos;
}

int main() {

    return 0;
}
