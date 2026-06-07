#include <stdio.h>

void SWAP(int *, int *);
void PART(int [], int [], int *, int *);
void SORT(int [], int [], int, int);

int main() {
    int n;
    scanf("%d", &n);

    n += n;
    
    int arr[n];
    int sub[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if(i % 2 == 0) {
            sub[i] = 1;
        }
        else {
            sub[i] = -1;
        }
    }
    
    SORT(arr, sub, 0, n - 1);

    int cnt = 0;
    int max = 0;
    
    for(int i = 0; i < n; i++) {
        cnt += sub[i];

        if(max < cnt) {
            max = cnt;
        }
    }

    printf("%d", max);

    return 0;
}

void SWAP(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void PART(int arr[], int sub[], int *low, int *high) {
    int l = *low;
    int r = *high;
    int m = *low;

    int val = arr[l] + (arr[r] - arr[l]) / 2;

    while(m <= r) {
        if(arr[m] == val) {
            m++;
        }
        else if(arr[m] < val) {
            SWAP(&arr[l], &arr[m]);
            SWAP(&sub[l], &sub[m]);
            l++;
            m++;
        }
        else {
            SWAP(&arr[m], &arr[r]);
            SWAP(&sub[m], &sub[r]);
            r--;
        }
    }

    *low = l;
    *high = r;
}

void SORT(int arr[], int sub[], int l, int r) {
    while(l < r) {
        int low = l;
        int high = r;
        PART(arr, sub, &low, &high);

        if(low - l < r - high) {
            SORT(arr, sub, l, low - 1);
            l = high + 1;
        }
        else {
            SORT(arr, sub, high + 1, r);
            r = low - 1;
        }
    }
}
