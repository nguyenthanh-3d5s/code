#include <stdio.h>

int SEARCH(int [], int, int);

int main() {
    int n, x;
    scanf("%d %d", &n, &x);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d", SEARCH(arr, n, x));
    return 0;
}

int SEARCH(int arr[], int n, int x) {
    int pos = -1;
    int l = 0;
    int r = n - 1;

    while(l <= r) {
        int m = l + (r - l) / 2;

        if(arr[m] == x) {
            pos = m;
            l = m + 1;
        }
        else if(arr[m] < x) {
            l = m + 1;
            //pos = l;
        }
        else {
            r = m - 1;
        }
    }

    return (pos == n) ? pos - 1 : pos;
}
