#include <stdio.h>

void SWAP(int *, int *);
void PART(int [],  int *, int *);
void SORT(int [], int, int);
int UPPER_BOUND(int [], int, int, int);

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    SORT(arr, 0, n - 1);

    int pos = 0;
    int cnt = 0;

    while(pos != -1) {
        cnt++;
        pos = UPPER_BOUND(arr, pos, n, arr[pos] + 1);
    }

    printf("%d", cnt);

    return 0;
}

void SWAP(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void PART(int arr[], int *low, int *high) {
    int l = *low;
    int r = *high;
    int m = *low;

    int mid = l + (r - l) / 2;
    int val = arr[mid];

    while(m <= r) {
        if(arr[m] == val) {
            m++;
        }
        else if(arr[m] < val) {
            SWAP(&arr[l], &arr[m]);
            l++;
            m++;
        }
        else {
            SWAP(&arr[m], &arr[r]);
            r--;
        }
    }

    *low = l;
    *high = r;
}

void SORT(int arr[], int l, int r) {
    while(l < r) {
        int low = l;
        int high = r;
        PART(arr, &low, &high);

        if(low - l < r - high) {
            SORT(arr, l, low - 1);
            l = high + 1;
        }
        else {
            SORT(arr, high + 1, r);
            r = low - 1;
        }
    }
}

int UPPER_BOUND(int arr[], int l, int n, int x) {
    int pos = -1;
    int r = n - 1;

    while(l <= r) {
        int m = l + (r - l) / 2;

        if(arr[m] == x) {
            pos = m;
            l = m + 1;
        }
        else if(arr[m] < x) {
            l = m + 1;
            pos = l;
        }
        else {
            r = m - 1;
        }
    }

    return (pos == n) ? -1 : pos;
}
