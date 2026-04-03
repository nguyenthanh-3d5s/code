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
        int m1 = l + (r - l) / 3;
        int m2 = r - (r - l) / 3;

        if(x == arr[m1]) {
            pos = m1;
            l = m1 + 1;
        }
        else if(x == arr[m2]) {
            pos = m2;
            l = m2 + 1;
        }
        else if(x < arr[m1]) {
            r = m1 - 1;
        }
        else if(x < arr[m2]) {
            l = m1 + 1;
            r = m2 - 1;
            //pos = l;
        }
        else {
            l = m2 + 1;
            //pos = l;
        }
    }

    return (pos == n) ? pos - 1 : pos;
}
