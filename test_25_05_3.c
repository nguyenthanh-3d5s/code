#include <stdio.h>

void SWAP(int *, int *);
void PART(int [],  int *, int *);
void SORT(int [], int, int);

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    SORT(arr, 0, n - 1);

    int i = 0;
    int j = n - 1;
    int cnt = 0;

    while(i < j) {
        if(arr[i] + arr[j] <= k) {
            cnt++;
        }
        else {
            cnt += 2;
        }
        i++;
        j--;
    }

    printf("%d", (n % 2 == 0) ? cnt : cnt + 1);

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
