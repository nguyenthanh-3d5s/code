#include <stdio.h>

void SWAP(int *, int *);
void PART(int [],  int *, int *);
void SORT(int [], int, int);
int SEARCH(int [], int);

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    arr[0] = 0;
    
    for(int i = 1; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    SORT(arr, 1, n - 1);
    
    printf("%d", SEARCH(arr, n));
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

int SEARCH(int arr[], int n) {
    int l = 0;
    int r = n - 1;

    while(l <= r) {
        int m = l + (r - l) / 2;

        if(arr[m] == m) {
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }

    return l;
}
