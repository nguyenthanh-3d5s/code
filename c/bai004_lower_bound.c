#include <stdio.h>

int LOWER_BOUND(int [], int, int);

int main() {
    int n, x;
    scanf("%d %d", &n, &x);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d \n", LOWER_BOUND(arr, x, n));
    return 0;
}

int LOWER_BOUND(int arr[], int x, int n) {
    int pos = -1;
    int l = 0;
    int r = n - 1;

    while(l <= r) {
        int m = l + (r - l) / 2;

        if(arr[m] == x) {
            pos = m;
            r = m - 1;
        }
        else if(arr[m] > x) {
            r = m - 1;
        }
        else {
            l = m + 1;
        }
    }

    return pos;
}
